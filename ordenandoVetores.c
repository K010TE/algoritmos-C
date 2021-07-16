#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
const int TAMV = 4;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL,"");

    int i, j, troca, vet[TAMV];
    for (i = 0; i < TAMV; i++)
    {
        printf("indice %d do vetor: ", i);
        scanf("%d", &vet[i]);
        fflush(stdin);
    }
    for (i = 0; i < TAMV; i++)
    {
        for (j = i+1; j < TAMV; j++)
        {
            if (vet[j] < vet[i])
            {
                troca = vet[i];
                vet[i] = vet[j];
                vet[j] = troca;
            }
            
        }
        
    }
    printf("\nO vetor ordenado em ordem crescente é: ");
    for (i = 0; i < TAMV; i++)
    {
        printf("%d ", vet[i]);
    }
    
    

    return 0;
}
