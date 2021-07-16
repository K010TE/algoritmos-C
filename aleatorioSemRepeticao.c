#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
const TAM = 10;

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
    int numero=10, numeros[TAM], i, numero_sorteado;
    for (i = 0; i < numero; i++) {

      numero_sorteado = rand() % 99;

      //se retornar false inclui o numero no array, se retornar true decrementa o contador (também exclui o zero)
      if(!verificaArray(numero_sorteado, numeros, i ) && numero_sorteado != 0) {
        numeros[i] = numero_sorteado;
        printf("%d\n",numero_sorteado);
      } 
      else {
        i--;
      }
    }
}

