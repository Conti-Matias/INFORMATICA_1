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
	int n1,n2=0;
	float media=0;
	printf("calcolo della media dei numeri inseriti, scrivere 0 per terminare\n");
	do
	{
		printf("Inserisci un numero: ");
	    scanf("%d",&n1);
		if(n1!=0)
		{
			media=media+n1;
			n2=n2+1;
		}
	}
	while(n1!=0);
	media=media/n2;
	printf("la media e' %f",media);
	return 0;
}

