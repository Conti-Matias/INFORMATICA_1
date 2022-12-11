/** ****************************************************************************************
* \mainpage numeriprimi
* Scrivere un programma che stampi tutti i numeri primi compresi tra 1 e 100. 
* Un numero è primo quando ha come divisore uno e sé stesso. Quindi è primo 
* ciascun numero naturale maggiore di 1 che sia divisibile solamente per 1 e per sé stesso.
* @author Conti Gallenti Matias
* @date 05/12/2022
*/

#include <stdio.h>     

int main()  
{
    int i, j;	 //contatori
    int cont=0;   //variabile di controllo   
	printf("Matias Conti Gallenti\nverranno stampati i numeri primi da 1 a 100\n");
	
	for(i=1; i<101; i++) //controlli i numeri da 1 a 100
	{
		for(j=2;j<=i/2;j++)     //controlli se ha dei divisori
	{
		if(i%j==0)		
			cont++;
	}
	if(cont!=0)		//se ha dei divisori resetti il contatore
		cont=0;
	else		//é un numero primo
		printf("%d e un numero primo\n",i);
	}
}
