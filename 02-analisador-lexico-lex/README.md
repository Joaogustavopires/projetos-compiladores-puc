# 02 - Analisador Léxico Completo
## Implementação do Léxico com Tabela de Símbolos (Usando Lex/Flex)

Este projeto implementou a fase **Léxica** de um compilador para uma linguagem *Like-C*, utilizando a ferramenta **Lex/Flex** para definir as regras de reconhecimento de tokens. O trabalho também incluiu a gestão da Tabela de Símbolos.

### 🎯 Objetivos Implementados

O analisador léxico foi projetado para:
* **Identificar Palavras Reservadas Customizadas:** Foram definidas palavras reservadas para estruturas de repetição (`for`, `while`), condicionais (`if`), e tipos (`int`, `char`, `void`, `float`), permitindo customização além do padrão C.
* **Reconhecer Literais:** Suporte a Números Reais (ponto flutuante), Números Inteiros e Literais de String.
* **Operadores e Contexto:** Reconhecer operadores aritméticos, comparativos, lógicos (AND, OR, NOT) e separadores/definições de contexto (`(`, `)`, `{`, `}`, `[`, `]`, `;`).
* **Tratamento de Erros:** Reportar erros léxicos de forma precisa, indicando a linha de ocorrência.
* **Entrada de Arquivo:** O analisador processa arquivos de código-fonte completos (Ex: `entradaX.c`) como argumento de linha de comando.

### 🏛️ Tabela de Símbolos

A Tabela de Símbolos foi implementada em C para gerenciar todos os **identificadores** (variáveis e funções) encontrados.
* **Funcionalidade:** Armazenar cada identificador uma única vez, garantindo a unicidade e preparando a estrutura para as fases Semântica e de Geração de Código.
* **Saída:** O programa imprime a lista completa de tokens encontrados e, ao final, imprime o conteúdo completo da Tabela de Símbolos (`imprime()`).

### ⚙️ Execução e Arquivos Chave

* **Ferramentas:** Lex/Flex, GCC.
* **Arquivos Chave:**
    * `analex.l`: Definições das Expressões Regulares e ações léxicas.
    * `tabsimb.h` e `tokens.h`: Estrutura da Tabela de Símbolos e definições de tokens.
* **Pasta de Testes:** A pasta `entradas_saidas/` contém 5 arquivos de teste e o script `verifica_inconsistencias.sh` para validação automática das saídas.
