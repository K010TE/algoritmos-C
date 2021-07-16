#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int op = 0;
	int votov, votop=0, v1=0, v2=0, v3=0, vn=0, p1=0, p2=0, pn=0;
	while (op !=3){
		printf("\nPESQUISA DE VOTOS \n");
		printf("-------------------------- \n");
		printf("Digite a opção desejada \n");
		printf ("1 - Votar \n");
		printf ("2 - Apuração dos votos \n");
		printf ("3 - Sair \n");
	
		scanf("%d", &op);
		fflush(stdin);
		
		switch (op){
			case 1 : {
				system("cls");
				printf ("Vote para vereador: \n");
				scanf("%d", &votov);
				fflush (stdin);
				switch (votov){
					case 111 : {
						printf ("Votou em %d - Vereador Joao do Frete \n", votov);
						v1++;
						break;
					}
					case 222 : {
						printf ("Votou em %d - Vereador Maria da Pamnonha \n", votov);
						v2++;
						break;
					}
					case 333 : {
						printf ("Votou em %d - Vereador Ze da Farmacia \n", votov);
						v3++;
						break;
					}
					case 444 : {
						printf ("Votou em %d - Voto nulo \n", votov);
						vn++;
						break;
					}
					default : {
						printf ("Votou em %d - Voto inválido, Não será computado. \n", votov);
						break;
					}
				}
				system("pause");
				system("cls");
				printf ("Vote para prefeito: \n");
				scanf("%d", &votop);
				fflush(stdin);
				
				switch (votop){
					case 11 : {
					printf ("Confirmado voto em %d - Prefeito Dr. Zureta \n", votop);
					p1++;
				system("pause");
				system("cls");
					break;
				}
				case 22 : {
					printf ("Confirmado voto em %d - Prefeito Senhor Gomes \n", votop);
					p2++;
				system("pause");
				system("cls");
					break;
				}
				case 44: {
					printf ("Confirmado voto em %d - Voto nulo \n", votop);
					pn++;
				system("pause");
				system("cls");
					break;
				}
				
				default : {
					printf ("Voto inválido. Não será computado \n");
					break;
				}
				break;
				}
				break;
			
			}
		
			case 2 : {
				system("cls");
				
				printf ("\nO TOTAL de votos é: %d \n\n", (v1+v2+v3+vn+p1+p2+pn));
				printf ("O total de votos para VEREADOR é: %d \n", (v1+v2+v3+vn));
				printf ("Distribuidos assim: \n");
				printf("Verador João do Frete: %d votos \n", v1);
				printf("Verador Maria da Pamonha: %d votos \n", v2);
				printf("Verador Ze da Farmacia: %d votos \n", v3);
				printf("Votos nulos: %d votos \n\n", vn);
				printf ("O total de votos para PREFEITO é %d \n", (p1+p2+pn));
				printf("Distribuidos assim: \n");
				printf("Prefeito Dr. Zureta: %d votos \n", p1);
				printf("Prefeito Senhor Gomes: %d votos \n", p2);
				printf("Votos nulos: %d votos \n\n", pn);
				system("pause");
				system("cls");
				break;
			}

			case 3 : {
				printf ("Fim da votação \n");
				break;
			}
			default : {
				printf("\nOpção inválida! \nEntre com um número entre 1 e 3 \n\n");
				system("pause");
				system("cls");
				break;
			}
		}

	}
	
	system ("pause");
	return 0;
}
