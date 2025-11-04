#include <stdio.h>

int main()
{
    int numero;
    int soma  = 0;
    do {
        printf("Digite um número: ");
        scanf("%i", &numero);
        if (numero >= 0) {
            soma += numero;
        }
    } while (numero >= 0);
    
    printf("A leitura foi encerrada porque você digitou um numero negativo.\n");
    printf("A soma de todos os números positivos digitados é: %i", soma);
    
    return 0;    
}
