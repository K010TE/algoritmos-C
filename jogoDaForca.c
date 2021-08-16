#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>



char palavra[20];
char chutes[26];
int tentativas = 0;

void abertura() {
    printf("/****************/\n");
    printf("/ JOGO DA FORCA */\n");
    printf("/****************/\n");
    printf("by K010TE \n\n");
}

void chuta() {
    char chute;
    printf("\n");
    printf("Qual letra? ");
    scanf(" %c", &chute);

    chutes[tentativas] = chute;
}

int jachutou(char letra) {
    int achou = 0;
    for(int j = 0; j < tentativas; j++) {
        if(chutes[j] == letra) {
            achou = 1;
            break;
        }
    }

    return achou;
}

void desenhaforca() {

  setlocale(LC_ALL, "");
    printf("\n");
    printf("Quantidade de chutes: %d \n\n", tentativas);

    for(int i = 0; i < strlen(palavra); i++) {

        if(jachutou(palavra[i])) {
            printf("%c ", palavra[i]);
        } else {
            printf("_ ");
        }

    }
    printf("\n");

}

void escolhepalavra() {
    sprintf(palavra, "MELANCIA");
}

int main() {
  setlocale(LC_ALL, "");

    int acertou = 0;
    int enforcou = 0;

    abertura();
    escolhepalavra();

    do {

        desenhaforca();
        chuta();

        tentativas++;

    } while (!acertou && !enforcou);

}