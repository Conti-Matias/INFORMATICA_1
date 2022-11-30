/** ****************************************************************************************
* \mainpage divisorinumero
* Scrivere un programma che, richiesto un numero intero,
* visualizzi tutti i suoi divisori.
* @author Conti Gallenti Matias
* @date 30/11/2022
*/

#include <stdio.h>

int main() 
{
	int n1, n2;
	printf("Inserisci un numero: ");
	scanf("%d",&n1);
	
	for(n2=2;n2<=n1/2;n2++)
	{
		if(n1%n2==0)
			printf("un divisore e' %d\n",n2);
	}
	
}
