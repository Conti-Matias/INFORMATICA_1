/** ****************************************************************************************
* \mainpage c_sconto.c
*
* @brief  Un negoziante per ogni spesa di importo superiore a 50 € effettua uno sconto 
* del 5%, del 10% per ogni spesa superiore a 100 €. Scrivere un programma che richieda 
* all'utente l'ammontare della spesa e visualizzi quindi l'importo effettivo da pagare.. 
* 
* @author Conti Gallenti Matias
* @date 26/10/2022
*/

#include <stdio.h>

float main() 
{
	float num1;  //input
	
	//lettura variabili
	printf("Conti Gallenti Matias\n"); 
	printf("scrivi il prezzo speso: ");
	scanf("%f", &num1);
	
	if(num1>100)
	{
		//Se laspesa superiore a 100 €
		//Facciamo uno sconto del 10%
		num1=(num1/100)*90;
		printf("il prezzo e' %f", num1);
	}
	else if(num1>50)
	{
		//Se laspesa superiore a 50 €
		//Facciamo uno sconto del 5%
		num1=(num1/100)*95;
		printf("il prezzo e' %f", num1);
	}
	else
	{
		printf("il prezzo e' %f", num1);
	}
	
	return 0; //termine del programma
}
