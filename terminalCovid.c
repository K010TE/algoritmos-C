#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>



int main()
{
    do { 

        FILE *relatorio;
        setlocale(LC_ALL, "");

        char cpf[20], nome[20];
        char sexo, op;
        int idade;
        char ala [20];
        char ala3[] = "Risco Alto";
        char ala2[] = "Risco Medio";
        char ala1[] = "Risco Baixo";
        //int *pontos;
        int p;

        p = 0;
        printf("TERMINAL DE ATENDOMENTO COVID-19 \n\n");
        printf("--------------------------------- ");
        printf("\n Preencha os campos a seguir \n");
        printf("\n CPF ");
        gets(cpf);
        fflush(stdin);
        printf("\n NOME: ");
        gets(nome);
        fflush(stdin);
        printf("\n SEXO (M ou F): ");
        scanf("%c", &sexo);
        fflush(stdin);
        printf("\n IDADE: ");
        scanf("%d", &idade);
        fflush(stdin);
        system("cls");

        // printf("PACIENTE %s", nome);
        // printf("\nResponda s para sim ou n para n�o: \n");

        sn(nome);
        

        printf("\n - Tem Febre? ");
        op = getchar();
        fflush(stdin);

        if (op == 's' || op == 'S')
        {
            p = p + 5;
        }

        system("cls");

        sn(nome);

        printf("\n - Tem dor de cabe�a? ");
        op = getchar();
        fflush(stdin);

        if (op == 's' || op == 'S')
        {
            p = p + 1;
        }

        system("cls");

        sn(nome);

        printf("\n - Tem secre��o nasal ou espirros? ");

        op = getchar();
        fflush(stdin);

        if (op == 's' || op == 'S')
        {
            p = p + 1;
        }

        system("cls");

        sn(nome);

        printf("\n - Tem dor/irrita��o na garganta? ");

        op = getchar();
        fflush(stdin);

        if (op == 's' || op == 'S')
        {
            p = p + 1;
        }

        system("cls");

        sn(nome);

        printf("\n - Tem tosse seca? ");

        op = getchar();
        fflush(stdin);

        if (op == 's' || op == 'S')
        {
            p = p + 3;
        }

        system("cls");

        sn(nome);

        printf("\n - Tem dificuldade respirat�ria? ");

        op = getchar();
        fflush(stdin);

        if (op == 's' || op == 'S')
        {
            p = p + 10;
        }

        system("cls");

        sn(nome);

        printf("\n - Tem dores no corpo? ");

        op = getchar();
        fflush(stdin);

        if (op == 's' || op == 'S')
        {
            p = p + 1;
        }

        system("cls");

        sn(nome);


        printf("\n - Tem diarr�ia? ");

        op = getchar();
        fflush(stdin);

        if (op == 's' || op == 'S')
        {
            p = p + 1;
        }

        system("cls");

        sn(nome);


        printf("\n - Esteve em contato, nos �ltimos 14 dias, com um caso diagnosticado com COVID-19? ");

        op = getchar();
        fflush(stdin);

        if (op == 's' || op == 'S')
        {
            p = p + 10;
        }

        system("cls");

        sn(nome);


        printf("\n - Esteve em locais com grande aglomera��es? ");

        op = getchar();
        fflush(stdin);

        if (op == 's' || op == 'S')
        {
            p = p + 3;
        }

        system("cls");


        fflush(stdin);
        printf("\nO total de pontos foi: %d \n", p);
    
        if (p < 9)
        {
            printf("\nEncaminhar para a ala de %s ", ala1);
            strcpy(ala, ala1);
        }
        else if (p > 9 && p < 20)
        {
            printf("\nEncaminhar para a ala de %s ", ala2);
            strcpy(ala, ala2);
        }
        
        else if (p >19)
        {
            printf("\nEncaminhar para a ala de %s ",ala3);
            strcpy(ala, ala3);
        }
        printf("\n");

        relatorio = fopen("relatorio.txt", "a");

        if (relatorio == NULL)
        {
            printf("Erro na cria��o de relat�rio. Compare�a � recep��o");
            exit;
        }

        else
        {
            fprintf(relatorio, "\n ------------------------------------\n");
            fprintf(relatorio, "NOME: %s \n", nome);
            fprintf(relatorio, "CPF: %s \n", cpf);
            fprintf(relatorio, "SEXO: %c \n", sexo);
            fprintf(relatorio, "IDADE: %d \n", idade);
            fprintf(relatorio, "SCORE: %d \n", p);
            fprintf(relatorio, "ALA M�DICA: %s \n", ala);


            fclose(relatorio);

            printf("\nFoi gerado um relat�rio com seus dados \n\n");
            printf("Pressione ENTER para terminar");

            getch();
            system("cls");
        }
    }while (true);
        


    return 0;
}

int sn (char nome[])
{
    printf("PACIENTE %s \n", nome);
    printf("\nResponda s para SIM ou n para NAO e pressione ENTER: \n");
}
