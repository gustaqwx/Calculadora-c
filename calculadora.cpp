#include <stdio.h>
#include <math.h>


float somar(float a, float b){
    return a + b;
}

float subtrair(float a, float b){
    return a - b;
}

float multiplicar(float a, float b){
    return a * b;
}

float dividir(float a, float b){
    return a / b;
}

float potencia(float base, float expoente){
    return pow(base, expoente);
}

float raizQuadrada(float num){
    return sqrt(num);
}



int main(){
    float num1, num2, resultado;
    char operador;
    char continuar = 's';

    printf("=== Calculadora em C ===\n");
    printf("Operacoes disponiveis: + - * / ^ (potencia)\n");
    printf("Para raiz quadrada, use apenas um numero seguido de 'r' (ex: 9 r)\n");

    while (continuar == 's' || continuar == 'S'){

        printf("\nDigite sua operacao: ");

      
        scanf("%f", &num1);

       
        scanf(" %c", &operador);

    
        if (operador == 'r' || operador == 'R'){
            if (num1 < 0){
                printf("Erro: nao existe raiz quadrada real de numero negativo!\n");
            } else {
                resultado = raizQuadrada(num1);
                printf("Resultado: %.2f\n", resultado);
            }
        }
        else {
    
            scanf("%f", &num2);

            switch (operador){
                case '+':
                    resultado = somar(num1, num2);
                    printf("Resultado: %.2f\n", resultado);
                    break;

                case '-':
                    resultado = subtrair(num1, num2);
                    printf("Resultado: %.2f\n", resultado);
                    break;

                case '*':
                    resultado = multiplicar(num1, num2);
                    printf("Resultado: %.2f\n", resultado);
                    break;

                case '/':
                    if (num2 == 0){
                        printf("Erro: divisao por zero!\n");
                    } else {
                        resultado = dividir(num1, num2);
                        printf("Resultado: %.2f\n", resultado);
                    }
                    break;

                case '^':
                    resultado = potencia(num1, num2);
                    printf("Resultado: %.2f\n", resultado);
                    break;

                default:
                    printf("Operador invalido!\n");
            }
        }

        printf("\nDeseja continuar? (s/n): ");
        scanf(" %c", &continuar);
    }

    printf("\nEncerrando calculadora. Ate mais!\n");
    return 0;
}
