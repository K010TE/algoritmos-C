#include <stdio.h>
#include <stdlib.h>
#include <time.h>

  
    
int main(int argc, char const *argv[])
{
    srand( time(NULL) );

    int sorteado, n;
    char participantes [11][11];

    printf("Informe a quantidade de participantes do sorteio: ");
    scanf("%d", &n);

    for (int i =0; i < n; i++)
    {
        printf("Digite o %d nome: ", i+1);
        scanf("%s", &participantes[i]);
        fflush(stdin);
    }

    sorteado = rand() % n;
    printf("\n-----------------------------------------------\n\n\n\n");

    printf("O nome sorteado foi:            %s \n\n", participantes[sorteado]);

    printf("PARABENS %s!!!! \n\n", participantes[sorteado]);
    getch();
    //system("pause");
}
    


