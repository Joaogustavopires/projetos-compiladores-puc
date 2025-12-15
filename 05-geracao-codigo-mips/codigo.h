#include "semantic.h"
#include "listacodigo.h"

int temp=-1;
int newTemp() {
	return temp--;
}

void freeTemp() {
	temp++;
}
int label = 0;
int newLabel() {
	return ++label;
}

char reg1[5];
char reg2[5];
char reg_temp[5];
void getName(int num, char *name) {
  if (num >= 0 ) {
    sprintf(name,"$s%d",num);
  }
  else 
    sprintf(name,"$t%d",-(num+1));
}

void Funct(struct no* Funct, int Id, struct no Comandos) {
	create_cod(&Funct->code);
    sprintf(instrucao, "%s:\n", obtemNome(Id));
    insert_cod(&Funct->code, instrucao);
    insert_cod(&Funct->code, Comandos.code);
    if (strcmp(obtemNome(Id), "main") == 0) {
        sprintf(instrucao, "\tli $v0,10\n");
        insert_cod(&Funct->code, instrucao);
        sprintf(instrucao, "\tsyscall\n");
        insert_cod(&Funct->code, instrucao);
    } else {
        sprintf(instrucao, "\tjr $ra\n");
        insert_cod(&Funct->code, instrucao);
    }
}

void adiciona_argumentos(char **code, int id, struct ids Args){
  char reg_dest[10], reg_orig[10];
  for(int i=0; i<Args.tam; i++) {
      int param_place = Tabela[id].arg_list[i];
      int arg_place = Args.ids[i];
      getName(param_place, reg_dest);
      getName(arg_place, reg_orig);
      sprintf(instrucao, "\tmove %s,%s\n", reg_dest, reg_orig);
      insert_cod(code, instrucao);
  }
}

void Call(struct no* Call, int Id, struct ids Args) {
	create_cod(&Call->code);
    adiciona_argumentos(&Call->code, Id, Args);
    sprintf(instrucao, "\tjal %s\n", obtemNome(Id));
    insert_cod(&Call->code, instrucao);
	Call->place = newTemp();
    char reg_dest[10];
    getName(Call->place, reg_dest);
    sprintf(instrucao, "\tmove %s,$v0\n", reg_dest);
    insert_cod(&Call->code, instrucao);
}

void Call_blank(struct no* Call, int Id) {
	create_cod(&Call->code);
    sprintf(instrucao, "\tjal %s\n", obtemNome(Id));
    insert_cod(&Call->code, instrucao);
	Call->place = newTemp();
    char reg_dest[10];
    getName(Call->place, reg_dest);
    sprintf(instrucao, "\tmove %s,$v0\n", reg_dest);
    insert_cod(&Call->code, instrucao);
}

void Atrib(struct no *Atrib, int var_pos, struct no Exp) {
	create_cod(&Atrib->code);
	insert_cod(&Atrib->code,Exp.code);
    char reg_orig[10];
    getName(Exp.place, reg_orig);
    
    if (var_pos >= 0) {
        int offset = get_var_offset(var_pos);
        char *nome_var = obtemNome(var_pos);
        sprintf(instrucao, "\tsw %s,%d($sp)\t# %s\n", reg_orig, offset, nome_var);
        insert_cod(&Atrib->code, instrucao);
    } else {
        char reg_dest[10];
        getName(var_pos, reg_dest);
        sprintf(instrucao, "\tmove %s,%s\n", reg_dest, reg_orig);
        insert_cod(&Atrib->code, instrucao);
    }
}

void Li(struct no *Exp, int num) {
	create_cod(&Exp->code);
	Exp->place = newTemp();
    char reg_dest[10];
    getName(Exp->place, reg_dest);
    sprintf(instrucao, "\tli %s,%d\n", reg_dest, num);
    insert_cod(&Exp->code, instrucao);
}

void Lw(struct no *Exp, int var_pos) {
	create_cod(&Exp->code);
	Exp->place = newTemp();
    int offset = get_var_offset(var_pos);
    char *nome_var = obtemNome(var_pos);
    char reg_dest[10];
    getName(Exp->place, reg_dest);
    sprintf(instrucao, "\tlw %s,%d($sp)\t# %s\n", reg_dest, offset, nome_var);
    insert_cod(&Exp->code, instrucao);
}

void ExpAri(char *operacao, struct no *Exp, struct no Exp1, struct no Exp2) {
	Exp->place = newTemp();
	create_cod(&Exp->code);
    insert_cod(&Exp->code, Exp1.code);
    insert_cod(&Exp->code, Exp2.code);
    
    char reg_dest[10], reg_op1[10], reg_op2[10];
    getName(Exp->place, reg_dest);
    getName(Exp1.place, reg_op1);
    getName(Exp2.place, reg_op2);
    
    sprintf(instrucao, "\t%s %s,%s,%s\n", operacao, reg_dest, reg_op1, reg_op2);
    insert_cod(&Exp->code, instrucao);
}

void ExpRel(char *branch, struct no *Exp, struct no Exp1, struct no Exp2) { 
	Exp->place = newTemp();
	create_cod(&Exp->code);
    insert_cod(&Exp->code, Exp1.code);
    insert_cod(&Exp->code, Exp2.code);
    
    char reg_dest[10], reg_op1[10], reg_op2[10];
    getName(Exp->place, reg_dest);
    getName(Exp1.place, reg_op1);
    getName(Exp2.place, reg_op2);
    
    int label_true = newLabel();
    
    sprintf(instrucao, "\tli %s,1\n", reg_dest);
    insert_cod(&Exp->code, instrucao);
    
    sprintf(instrucao, "\t%s %s,%s,L%d\n", branch, reg_op1, reg_op2, label_true);
    insert_cod(&Exp->code, instrucao);
    
    sprintf(instrucao, "\tli %s,0\n", reg_dest);
    insert_cod(&Exp->code, instrucao);
    
    sprintf(instrucao, "L%d:\n", label_true);
    insert_cod(&Exp->code, instrucao);
}

void If(struct no *If_cmd, struct no Exp, struct no Compound) 
{  
	create_cod(&If_cmd->code);
    insert_cod(&If_cmd->code, Exp.code);
    
    char reg_exp[10];
    getName(Exp.place, reg_exp);
    int label_fim = newLabel();
    
    sprintf(instrucao, "\tbeq %s,0,L%d\n", reg_exp, label_fim);
    insert_cod(&If_cmd->code, instrucao);
    
    insert_cod(&If_cmd->code, Compound.code);
    
    sprintf(instrucao, "L%d:\n", label_fim);
    insert_cod(&If_cmd->code, instrucao);
}

void IfElse(struct no *If_cmd, struct no Exp, struct no Compound1, struct no Compound2) 
{  
	create_cod(&If_cmd->code);
    insert_cod(&If_cmd->code, Exp.code);
    
    char reg_exp[10];
    getName(Exp.place, reg_exp);
    int label_else = newLabel();
    int label_fim = newLabel();
    
    sprintf(instrucao, "\tbeq %s,0,L%d\n", reg_exp, label_else);
    insert_cod(&If_cmd->code, instrucao);
    
    insert_cod(&If_cmd->code, Compound1.code);
    
    sprintf(instrucao, "\tj L%d\n", label_fim);
    insert_cod(&If_cmd->code, instrucao);
    
    sprintf(instrucao, "L%d:\n", label_else);
    insert_cod(&If_cmd->code, instrucao);
    
    insert_cod(&If_cmd->code, Compound2.code);
    
    sprintf(instrucao, "L%d:\n", label_fim);
    insert_cod(&If_cmd->code, instrucao);
}

void While(struct no *While_cmd, struct no Exp, struct no Compound) 
{  
	create_cod(&While_cmd->code);
    int label_inicio = newLabel();
    int label_fim = newLabel();
    
    sprintf(instrucao, "L%d:\n", label_inicio);
    insert_cod(&While_cmd->code, instrucao);
    
    insert_cod(&While_cmd->code, Exp.code);
    
    char reg_exp[10];
    getName(Exp.place, reg_exp);
    
    sprintf(instrucao, "\tbeq %s,0,L%d\n", reg_exp, label_fim);
    insert_cod(&While_cmd->code, instrucao);
    
    insert_cod(&While_cmd->code, Compound.code);
    
    sprintf(instrucao, "\tj L%d\n", label_inicio);
    insert_cod(&While_cmd->code, instrucao);
    
    sprintf(instrucao, "L%d:\n", label_fim);
    insert_cod(&While_cmd->code, instrucao);
}

void DoWhile(struct no *While_cmd, struct no Exp, struct no Compound) 
{  
	create_cod(&While_cmd->code);
    int label_inicio = newLabel();
    int label_fim = newLabel();
    
    sprintf(instrucao, "L%d:\n", label_inicio);
    insert_cod(&While_cmd->code, instrucao);
    
    insert_cod(&While_cmd->code, Compound.code);
    insert_cod(&While_cmd->code, Exp.code);
    
    char reg_exp[10];
    getName(Exp.place, reg_exp);
    
    sprintf(instrucao, "\tbeq %s,0,L%d\n", reg_exp, label_fim);
    insert_cod(&While_cmd->code, instrucao);
    
    sprintf(instrucao, "\tj L%d\n", label_inicio);
    insert_cod(&While_cmd->code, instrucao);
    
    sprintf(instrucao, "L%d:\n", label_fim);
    insert_cod(&While_cmd->code, instrucao);
}


void Println(struct no *Print, struct no Exp) {
char name_reg[10];
	create_cod(&Print->code);
	getName(Exp.place,name_reg);
	
	sprintf(instrucao,"\tli $v0, 1\n");
	insert_cod(&Print->code,instrucao);
	
	sprintf(instrucao,"\tmove $a0,%s\n", name_reg);
	insert_cod(&Print->code,instrucao);

	sprintf(instrucao,"\tsyscall\n");
	insert_cod(&Print->code,instrucao);

	sprintf(instrucao,"\tli $v0,11\n"); 
	insert_cod(&Print->code,instrucao);

   	sprintf(instrucao,"\tli $a0,'\\n'\n"); 
	insert_cod(&Print->code,instrucao);

    sprintf(instrucao,"\tsyscall\n"); 
	insert_cod(&Print->code,instrucao);
}