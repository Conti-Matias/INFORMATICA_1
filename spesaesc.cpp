/** ****************************************************************************************
* \mainpage c_spesa.c
*
* @author Conti Gallenti Matias
* @date 06/11/2022
*/

#include <stdio.h>

int main() 
{
	
	int kg;//input
	
	printf("Inserisci i kg di patate:\n");//lettura variabili
	scanf("%d", &kg);
	
	if (kg<=5)
		{
			printf("e' sufficiente un sacchetto");
		}
		else if (kg<=10)
			{
				printf("sono sufficienti due sacchetti");
			}
			else if (kg<=30)
				{
					printf("e' sufficiente una cassetta");
				}
				else if (kg<=60)
					{
						printf("sono sufficienti due cassette");
					}
					else if (kg>61)
						printf("numero inserito sbagliato");
	
	return 0;
}