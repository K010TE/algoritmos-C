#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
const int TAM = 3;
int main()
{
    setlocale(LC_ALL, "");
    printf("� N�is \n");
    int i, j, vetor[TAM];

    for (i = 0; i < TAM; i++)
    {
        printf("Digite o n�mero da posi��o %d do vetor: ", i);
        scanf("%d", &vetor[i]);
        fflush(stdin);
    } 
    printf("\nSequ�ncia de N�meros inseridos no vetor: \n\n");
    for (i = 0; i < TAM; i++)
    {
        printf("O vetor da posi��o %d foi %d: \n", i, vetor[i]);
    }
    
}
