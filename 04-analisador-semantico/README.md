# 04 - Analisador Semântico
## Checagem de Tipos, Promoção e Tabela de Símbolos Avançada

Nesta etapa crítica, o compilador foi estendido para realizar a **Análise Semântica**, garantindo que o programa não apenas segue a gramática, mas também respeita as regras de tipagem e escopo da linguagem. O foco foi na checagem de tipos e na manipulação da Tabela de Símbolos com metadados semânticos.

### 🎯 Objetivos Implementados

* **Checagem de Tipos:** Validação rigorosa da consistência de tipos em todas as operações:
    * **Atribuição:** Verificar se o tipo da expressão de atribuição é compatível com o tipo da variável de destino.
    * **Expressões Aritméticas/Lógicas:** Implementação de regras de **promoção de tipos** (Ex: `CHAR` → `INT` → `FLOAT`) para operações binárias.
* **Tabela de Símbolos Avançada (`tabsimb.h`):**
    * **Metadados:** A tabela agora armazena metadados essenciais, como o **tipo de retorno** de funções, o **número de parâmetros** e o **tamanho (size)** de cada identificador.
    * **Escopo:** Implementação de funções como `verifica_var_declarada` e `verifica_func_declarada`.
* **Fluxo Semântico (Ações YACC):** Adição de ações semânticas ao arquivo `sint.y` para:
    * Atribuir o tipo correto aos não-terminais (`%type <val> Exp`).
    * Chamar funções utilitárias (`retorna_maior_tipo`, `tipos_inconsistentes_atrib`) para inferir e verificar a compatibilidade de tipos.

### 💻 Arquitetura e Estruturas de Dados

* **`analex.l`:** Adaptado para preencher o `yylval` (valor semântico) com dados básicos (posição, lexema) antes de retornar o token.
* **`sint.y`:** Seção `%union` expandida para incluir campos como `tipo`, `posicao` e `val`.
* **`tipos.h`:** Arquivo dedicado a funções utilitárias para cálculo de tamanho, promoção de tipos e verificação de inconsistências.

### ⚙️ Execução e Validação

* O projeto é testado usando casos de teste que verificam cenários de erro semântico, como a atribuição de um tipo incompatível ou a chamada de uma função com número incorreto de parâmetros.
* A saída esperada é a detecção e o reporte da inconsistência semântica.
