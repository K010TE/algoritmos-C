#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include <stdbool.h>
const int TAMV = 5;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main() {
	setlocale(LC_ALL, "");
	float t, totalp, cdbp, acoesp, funimp, stocksp, reitsp, troca;
	float invest[5];
	int i, j, n;
	float media;

	printf("\n--------------------------------\nPrograma de investimento diversificado \n\n");
	printf("Tipos de investimento \n- CDBs \n- Ações \n- Fundos Imobiliários \n- Stocks \n- Reits\n\n");
		
	printf("Digite o total em R$ para investir: ");
	scanf("%f", &t);
	fflush(stdin);
	printf("\n\n");
	printf("O Valor considerado será de R$ %f \n\n\n", t);
	media = t/TAMV;
	//system("pause");
	system("cls");
	
	if (t>0)
	{
		n = 5;
		totalp = t;
		printf("\nVocê pode investir R$%f em %d investimentos\n", totalp, n);
		printf("---------------------------------------------------------------\n");

		printf("\nDigite O valor em R$ para investir em CDB: ");
		scanf("%f", &invest[0]);
		fflush(stdin);
		cdbp=(invest[0]/t)*100;
		printf("Serão investidos %f%% do valor em CDB\n", cdbp);
		fflush(stdin);
		totalp = totalp - invest[0];
		n--;

		
		if(totalp>0 && totalp<=t)
		{
			printf("\nVocê ainda pode investir R$%f em %d investimentos\n", totalp, n);
			printf("---------------------------------------------------------------\n");
			printf("Digite O valor em R$ para investir em Ações: ");
			scanf("%f", &invest[1]);
			fflush(stdin);
			acoesp=(invest[1]/t)*100;
			printf("Serão investidos %f%% do valor em Ações\n", acoesp);
			fflush(stdin);
			totalp = totalp - invest[1];
			n--;

			if(totalp>0 && totalp<=t)
			{
				printf("Você ainda pode investir R$%f em %d investimentos\n", totalp, n);
				printf("---------------------------------------------------------------\n");
				printf("Digite O valor em R$ para investir em Fundos Imobiliários: ");
				scanf("%f", &invest[2]);
				fflush(stdin);
				funimp=(invest[2]/t)*100;
				printf("Serão investidos %f%% do valor em F. Imob.\n", funimp);
				fflush(stdin);
				totalp = totalp - invest[2];
				n--;
				
				if(totalp>0 && totalp<=t)
				{
					printf("Você ainda pode investir R$%f em %d investimentos\n", totalp, n);
					printf("---------------------------------------------------------------\n");
					printf("Digite O valor em R$ para investir em em Stocks: ");
					scanf("%f", &invest[3]);
					fflush(stdin);
					stocksp=(invest[3]/t)*100;
					printf("Serão investidos %f%% do v em Stocks\n", stocksp);
					fflush(stdin);
					totalp = totalp - invest[3];
				
					if(totalp>0 && totalp<=t)
					{
						printf("Essa é última modalidade. Você ainda pode investir R$%f \n", totalp);
						printf("---------------------------------------------------------------\n");
						printf("Digite O valor em R$ para investir em em Reits: ");
						scanf("%f", &invest[4]);
						fflush(stdin);
						reitsp = (invest[4]/t) * 100;
						printf("Serão investidos %f%% do valor em Reits\n", reitsp);
						totalp = totalp - invest[4];
				
						if(totalp!=0)
						{
							printf("O percentual deve somar 100%%");
						}

						else
						{
							system("cls");
							printf("\nVocê fez a seguinte distribuição de investimento: \n");
							printf("Valor v: R$ %f \n\n", t);
							printf("CDB: R$ %f - %f%% \n", invest[0], cdbp);
							printf("Ações: R$ %f - %f%% \n", invest[1], acoesp);
							printf("F. Imobiliários: R$ %f - %f%% \n", invest[2], funimp);
							printf("Stocks: R$ %f - %f%% \n", invest[3], stocksp);
							printf("Reits: R$ %f - %f%% \n", invest[4], reitsp);

							printf("\nA sua média de investimento em cada ação é de R$%f \n\n", media);

							for (i = 0; i < TAMV; i++)
							{
								for (j = i+1; j < TAMV; j++)
								{
									if (invest[j] < invest[i])
									{
										troca = invest[i];
										invest[i] = invest[j];
										invest[j] = troca;
									}
									
								}
								
							}
							printf("O menor investimento foi de: %f \n", invest[0]);
							if (invest[0] == cdbp)
							{
								printf("Esse valor orresponde ao seu investimento em CDBs com %f%% do total invesetido \n", cdbp);
							}
							else if (invest[0] == acoesp)
							{
								printf("Esse valor orresponde ao seu investimento em Ações com %f%% do total invesetido \n", acoesp);

							}
							else if (invest[0] == funimp)
							{
								printf("Esse valor orresponde ao seu investimento em Fundos Imobiliários com %f%% do total invesetido \n", funimp);

							}
							else if (invest[0] == stocksp)
							{
								printf("Esse valor orresponde ao seu investimento em Stocks com %f%% do total invesetido \n", stocksp);

							}
							else if (invest[0] == reitsp)
							{
								printf("Esse valor orresponde ao seu investimento em Reits com %f%% do total invesetido \n", reitsp);

							}

							printf("O maior investimento foi de: %f \n", invest[4]);

							if (invest[4] == cdbp)
							{
								printf("Esse valor orresponde ao seu investimento em CDBs com %f%% do total invesetido \n", cdbp);

							}
							else if (invest[4] == acoesp)
							{
								printf("Esse valor orresponde ao seu investimento em Ações com %f%% do total invesetido \n", acoesp);

							}
							else if (invest[4] == funimp)
							{
								printf("Esse valor orresponde ao seu investimento em Fundos Imobiliários com %f%% do total invesetido \n", funimp);
							}
								
							else if (invest[4] == stocksp)
							{
								printf("Esse valor orresponde ao seu investimento em Stocks com %f%% do total invesetido \n", stocksp);
								
							}
							else if (invest[4] == reitsp)
							{
								printf("Esse valor orresponde ao seu investimento em Reits com %f%% do total invesetido \n", reitsp);

							}
						}
					}
				}
			}
		}	
	}
	return 0;
}