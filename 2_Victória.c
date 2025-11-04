#include <stdio.h>

int main()
{
    int n1;
    int n2;
   
    printf("Escreva o 1º numero:\n");
    scanf ("%i\n", &n1);
    printf("Escreva o 2º numero (ele deve ser diferente de 1º numero):\n");
    scanf ("%i\n", &n2);
    
    if (n1 < n2){
            while (n1 <= n2){
                n1++;
                printf("Agora o 1º numero é: %i e é igual ao segundo!\n");
            }
    }
    
    else{
        while (n1 > n2){
            n1--;
            printf("Agora o 1º numero é: %i e é igual ao segundo!\n");
    }
    }

    return 0;
}