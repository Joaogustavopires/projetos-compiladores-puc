# 05 - Geração de Código Assembly MIPS
## Tradução Final e Gerenciamento de Pilha

Este é o projeto final do compilador. A última fase consistiu em traduzir as construções sintáticas e semânticas validadas em **código Assembly para a arquitetura MIPS**. O foco principal foi o gerenciamento eficiente de memória (pilha) e registradores.

### 🎯 Objetivos Implementados

* **Geração de Código MIPS:** Implementação de funções (`codigo.h`) para gerar instruções MIPS (Ex: `lw`, `sw`, `add`, `sub`, `mul`, `div`, `li`, `move`, etc.).
* **Gerenciamento de Pilha (Stack):** Alocação e desreferência de variáveis locais na pilha através do `Stack Pointer ($sp)`.
    * A Tabela de Símbolos foi expandida para armazenar o **`offset`** de cada variável local.
* **Gerenciamento de Registradores:** Implementação de funções para alocar e gerenciar o uso de registradores temporários (`$t`) durante o cálculo de expressões.
* **Funções e Chamadas (`jal`):** Geração do código correto para definição de funções, passagem de argumentos (via registradores de parâmetro) e retorno de valor (`$v0`).
* **Estruturas de Controle:** Tradução de estruturas condicionais (`if`, `while`, `for`) em saltos (`beq`, `bne`, `j`) e *labels* únicos.

### 💻 Arquitetura de Geração

* **`codigo.h`:** Funções de alto nível (Ex: `ExpAri`, `LoadWord`) que geram as strings de Assembly.
* **`listacodigo.h`:** Funções auxiliares para manipulação e concatenação das strings de código gerado.
* **`struct no`:** Estrutura utilizada para o YACC propagar o código gerado (`char *code`), o tipo (`int tipo`) e o registrador temporário (`int place`) ao longo das regras de produção.
* **Saída:** O programa finaliza com a impressão do código Assembly MIPS gerado, pronto para ser executado em um simulador como o SPIM.

### ⚙️ Execução e Validação

* **Validação Automática:** A pasta `entradas_saidas/` contém arquivos de entrada e saídas esperadas (`saidaX_.txt`) que correspondem ao código Assembly MIPS correto.
* O script `verifica_inconsistencias.sh` é utilizado para comparar o código Assembly gerado com o gabarito.
