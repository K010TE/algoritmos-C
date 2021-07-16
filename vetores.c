#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
const int TAM = 3;
int main()
{
    setlocale(LC_ALL, "");
    printf("É Nóis \n");
    int i, j, vetor[TAM];

    for (i = 0; i < TAM; i++)
    {
        printf("Digite o número da posição %d do vetor: ", i);
        scanf("%d", &vetor[i]);
        fflush(stdin);
    } 
    printf("\nSequência de Números inseridos no vetor: \n\n");
    for (i = 0; i < TAM; i++)
    {
        printf("O vetor da posição %d foi %d: \n", i, vetor[i]);
    }
    
}
