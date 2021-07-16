#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

const int TAM = 10;

//Verifica se o numero está no array
bool verificaArray(int numero, int *arr, int tamanho){
    int i;
    for (i=0; i < TAM; i++) {
        if (arr[i] == numero)
            return true;
    }
    return false;
}


int main()
{
    int i, j, numero[TAM], cont, n, troca, cartela[TAM];

    //comando utilizado para criação de números aleatório  
    srand( time(NULL) );

    printf("Digite aquantidade de cartelas de bingo: ");
    scanf("%d", &n);
    fflush(stdin);
    for (cont = 0; cont < n; cont++)
    {
            printf("\nCartela %d \n", cont+1);
            do
        {
            int numero=10, numeros[TAM], i, numero_sorteado;
            for (i = 0; i < numero; i++) {

                numero_sorteado = rand() % 99;

                //se retornar false inclui o numero no array, se retornar true decrementa o contador (também exclui o zero)
                if(!verificaArray(numero_sorteado, numeros, i ) && numero_sorteado != 0) {
                    numeros[i] = numero_sorteado;
                    printf("numero %d: %d\n", i+1, numero_sorteado);
                } 
                else {
                    i--;
                }
            }
        }while (sizeof(cartela)<10);
    }
    
    system ("pause");
}