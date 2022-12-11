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
	int n1;
	int i;      //contatore
	printf("Inserisci un numero: ");
	scanf("%d",&n1);
	
	for(i=2;i<=n1/2;i++)     	//ciclo per trovare i divisori del numero inserito partendo da 2
	{
		if(n1%i==0)		//controllo se il contatore e' un divisore
			printf("un divisore e' %d\n",i);
	}
	
}
