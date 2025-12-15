# 03 - Analisador Sintático
## Implementação da Gramática e Parser (Usando YACC/Bison)

Nesta fase, a gramática da linguagem *Like-C* foi implementada usando a ferramenta **YACC/Bison**. O objetivo foi construir o **Analisador Sintático (Parser)**, que verifica se a sequência de tokens produzida pelo léxico (Trabalho 2) está em conformidade com as regras gramaticais definidas.

### 🎯 Objetivos Implementados

O analisador sintático foi capaz de reconhecer estruturas completas de programação:
* **Estrutura de Código:** Reconhecimento de códigos completos, contendo múltiplas **funções** e comandos em escopos diferentes.
* **Expressões:** Validação de expressões aritiméticas, lógicas e relacionais complexas.
* **Declarações e Uso:** Reconhecimento correto de declaração e uso de variáveis, incluindo **vetores**.
* **Controle de Fluxo:** Validação de estruturas de repetição e condição: `for`, `while`, `do while`, `if`, e `if-else`.
* **Atribuição:** Validação da sintaxe correta para atribuição de valores em variáveis.

### ⚙️ Execução e Validação

O projeto utiliza a integração clássica do Lex e YACC:
* **Compilação:** A compilação envolve a geração do código C pelo Lex e YACC, seguida da compilação pelo GCC (`lex -o analex.c analex.l` e `yacc -o sint.c sint.y -d`).
* **Validação Automática:** A pasta `entradas_saidas/` contém 12 arquivos de teste (`entradaX.c`) com códigos sintaticamente corretos e incorretos, permitindo a validação da saída através do script `verifica_inconsistencias.sh`.
* **Saída Esperada:** Em caso de erro, a saída deve ser uma mensagem clara de erro sintático, e em caso de sucesso, nenhuma saída deve ser emitida (confirmando que a entrada é válida).

### 📂 Arquivos Chave

* `sint.y`: Contém a gramática formal em notação Backus-Naur Form (BNF) estendida e as ações a serem executadas para cada produção.
* `analex.l`: Léxico do Trabalho 2, adaptado para retornar os códigos de tokens definidos no YACC.
