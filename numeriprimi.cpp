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
    int n1, n2;	 //contatori
    int ris=1;   //variabile di controllo   
	printf("Matias Conti Gallenti\nverranno stampati i numeri primi da 1 a 100\n");

    for(n1=2; n1<101; n1++) //ripeto i numeri da 2 a 100
	{       
    	for(n2=2; n2<n1; n2++) //ripeto tutti i numeri da 2 a n1
		{    
            		if(n1%n2==0) //se il resto tra n1/n2 è 0 ris è falso
               		ris=0;          
        	}
        if(ris) //stampo n1 solo se ris è vero
            printf("%d e' un numero primo \n", n1);
            ris=1;
    }
}
