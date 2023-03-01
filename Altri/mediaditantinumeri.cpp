/** ****************************************************************************************
* \mainpage mediaditantinumeri
* Si scriva un programma per calcolare la media aritmetica di una serie di numeri inseriti da tastiera.
* L’introduzione del valore 0 indica il termine del caricamento dei dati.
* @author Conti Gallenti Matias
* @date 30/11/2022
*/

#include <stdio.h>

int main() 
{
	int n1;
	int n2=0;		//contatore
	float media=0;		//risultato
	printf("Conti Gallenti Matias\ncalcolo della media dei numeri inseriti, scrivere 0 per terminare\n");
	do				//fare
	{
		printf("Inserisci un numero: ");
	    	scanf("%d",&n1);
		if(n1!=0)		//se n1 è diverso da 0 fare
		{
			media=media+n1; //prima parte del calcolo della media
			n2=n2+1;	
		}
	}
	while(n1!=0);			//finche n1 è diverso da 0		
	media=media/n2;			//calcolo media
	printf("la media e' %f",media);
	return 0;
}

