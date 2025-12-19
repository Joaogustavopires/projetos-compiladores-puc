# ⚙️ Construção de Compiladores

Projetos práticos desenvolvidos na disciplina **Compiladores** da **PUC Minas – Poços de Caldas**.

Este repositório reúne uma sequência de **5 trabalhos práticos** que, de forma incremental, culminaram na **construção completa de um compilador** para uma linguagem do tipo *Like-C*, abordando todas as fases clássicas do processo de compilação.

---

## 🎯 Objetivo

Demonstrar domínio conceitual e prático sobre a construção de compiladores, contemplando:

* Análise léxica, sintática e semântica
* Implementação de gramáticas formais
* Tradução intermediária e geração de código
* Organização de um pipeline completo de compilação

---

## 🧱 Arquitetura Geral do Compilador

O compilador desenvolvido segue uma arquitetura clássica em **pipeline**, onde cada fase consome a saída da etapa anterior:

**Análise Léxica → Análise Sintática → Análise Semântica → Geração de Código MIPS**

Essa abordagem evidencia a separação de responsabilidades e a evolução incremental do projeto.

---

## 🛠️ Fases do Compilador

| Nº | Projeto                              | Foco Principal                                                    | Ferramentas     |
| -- | ------------------------------------ | ----------------------------------------------------------------- | --------------- |
| 01 | Analisador de Expressões Aritméticas | Análise Léxica e Sintática (Descida Recursiva), Tradução Pós-Fixa | C, Pilha        |
| 02 | Analisador Léxico Completo           | Reconhecimento de Tokens, Regras Léxicas e Tabela de Símbolos     | Lex / Flex      |
| 03 | Analisador Sintático (YACC)          | Definição de Gramática, Funções e Estruturas de Controle          | YACC / Bison    |
| 04 | Analisador Semântico                 | Checagem e Promoção de Tipos, Tratamento de Escopo                | YACC / Bison, C |
| 05 | Geração de Código MIPS               | Geração de Assembly MIPS, Gerenciamento de Registradores e Pilha  | MIPS, C         |

---

## 📂 Estrutura do Repositório

* `01-analisador-descida-recursiva/` → Implementação inicial do analisador léxico e sintático
* `02-analisador-lexico-lex/` → Construção do analisador léxico utilizando Lex/Flex
* `03-analisador-sintatico-yacc/` → Analisador sintático baseado em gramáticas formais (YACC/Bison)
* `04-analisador-semantico/` → Validações semânticas, tipos e escopos
* `05-geracao-codigo-mips/` → Geração de código Assembly MIPS

---

## 🎯 Competências Demonstradas

* Construção de compiladores do zero
* Domínio das fases clássicas de compilação
* Implementação de gramáticas e parsers
* Manipulação de código de baixo nível
* Organização de projetos complexos e incrementais

---

## 🛠️ Tecnologias Utilizadas

* Linguagem C
* Lex / Flex
* YACC / Bison
* Assembly MIPS
* Ambiente Linux

---

## 🎓 Contexto Acadêmico

* **Disciplina:** Compiladores
* **Instituição:** Pontifícia Universidade Católica de Minas Gerais (PUC Minas – Poços de Caldas)

---

## 🧑‍💻 Autor

**João Gustavo Pires da Costa**  

Estudante de Ciência da Computação – PUC Minas

---

## 🏁 Conclusão

Este repositório evidencia uma base sólida em Ciência da Computação, demonstrando capacidade de lidar com sistemas complexos, compreender arquiteturas de compiladores e aplicar conceitos teóricos em implementações práticas de alto nível técnico.
