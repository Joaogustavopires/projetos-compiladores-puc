# 01 - Analisador de Expressões Aritméticas
## Analisador Léxico e Sintático por Descida Recursiva

Este projeto inicial foca na implementação das fases Léxica e Sintática de um compilador para expressões aritméticas, utilizando o método de **Descida Recursiva** (Recursive Descent Parsing).

O trabalho foi dividido em duas partes, que se encontram organizadas nas subpastas deste diretório.

---

### Parte 1: Base Léxica e Sintática
* **Pasta:** `parte-1-lexico-sintatico/`
* **Objetivo:** Implementar o núcleo do analisador Léxico para identificar tokens de operadores, números, IDs e o Sintático para validar a gramática das expressões.
* **Técnicas:**
    * **Léxico:** Reconhecimento de Tokens (`+`, `-`, `*`, `/`, `NUM`, `ID` de um caractere).
    * **Sintático:** Implementação da Gramática por **Descida Recursiva**.
    * **Erros:** Capacidade de reportar erros léxicos e sintáticos com o número da linha.

### Parte Final: Tradução Pós-Fixa e Avaliação
* **Pasta:** `parte-final-posfixa-avaliacao/`
* **Objetivo:** Complementar o analisador da Parte 1 com a tradução e avaliação semântica da expressão.
* **Técnicas:**
    * **Tradução:** Gerar a notação **pós-fixa** (Reverse Polish Notation) da expressão infixa.
    * **Avaliação:** Implementação de funções de avaliação recursiva, fazendo uso de **pilha** (`pilha.h`), para computar o **resultado final da expressão**.
    * **Requisitos:** O programa final deve exibir: "EXPRESSAO CORRETA", "NOTACAO POSFIXA: <versao_posfixa>" e "RESULTADO DA EXPRESSAO: <valor_resultado>".

### 💻 Arquivos Chave (Gerais)

* `sint.c`: Contém o analisador sintático, as regras de Descida Recursiva e a função `main`.
* `analex.h`: Contém o analisador léxico e as variáveis globais.
* `pilha.h`: Arquivo com a implementação da pilha para resolver as expressões.
