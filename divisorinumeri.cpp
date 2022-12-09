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
	int n2;      //contatore
	printf("Inserisci un numero: ");
	scanf("%d",&n1);
	
	for(n2=2;n2<=n1/2;n2++)     	//ciclo per trovare i divisori del numero inserito partendo da 2
	{
		if(n1%n2==0)		//controllo se il contatore e' un divisore
			printf("un divisore e' %d\n",n2);
	}
	
}
