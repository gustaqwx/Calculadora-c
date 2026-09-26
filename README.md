# Calculadora em C

Calculadora desenvolvida em linguagem C, capaz de realizar operações matemáticas básicas (adição, subtração, multiplicação, divisão) além de potenciação e raiz quadrada.

Este projeto começou simples, durante o início da faculdade, e foi evoluindo conforme fui aprendendo novos conceitos: primeiro com `switch/case` básico, depois adicionando loop para múltiplas operações, funções separadas para cada cálculo, e por fim operações mais avançadas usando a biblioteca `math.h`.

## Funcionalidades
- Soma, subtração, multiplicação e divisão
- Potenciação (`^`)
- Raiz quadrada (`r`)
- Loop para realizar várias operações sem precisar reabrir o programa
- Tratamento de erro para divisão por zero
- Tratamento de erro para raiz quadrada de número negativo
- Tratamento de erro para operador inválido

## Tecnologias
- Linguagem C
- Desenvolvido com Dev-C++

## Como compilar e rodar

### Usando Dev-C++
1. Abra o Dev-C++
2. Abra o arquivo `calculadora.c`
3. Clique em "Compile & Run" (ou pressione F11)

### Usando terminal (gcc/MinGW)

gcc calculadora.c -o calculadora -lm
./calculadora

> O parâmetro `-lm` é necessário para habilitar as funções da biblioteca matemática (`math.h`), usada na potenciação e raiz quadrada.

## Exemplo de uso

Digite sua operacao: 10 + 5
Resultado: 15.00

Digite sua operacao: 2 ^ 3
Resultado: 8.00

Digite sua operacao: 9 r
Resultado: 3.00


## O que aprendi com esse projeto
- Uso da estrutura `switch/case`
- Leitura de múltiplas variáveis com `scanf`
- Organização de código utilizando funções
- Uso de laços de repetição (`while`) para reexecutar operações
- Uso da biblioteca `math.h` (funções `pow` e `sqrt`)
- Tratamento de erros em diferentes cenários
