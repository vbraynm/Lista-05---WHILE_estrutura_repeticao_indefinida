/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero;
    int soma;
    do {
        printf("Digite um número: ");
        scanf("%i", &numero);
        if (numero >= 0) {
            soma += numero;
        }
    } while (numero >= 0);
    
    printf("Você digitou um número negativo, a leitura foi encerrada.\n");
    printf("A soma de todos os números positivos digitados é: %i", soma);
    
    return 0;    
}