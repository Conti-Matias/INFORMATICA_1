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
    int n1, n2, ris=1;      
	printf("Matias Conti Gallenti\nverranno stampati i numeri primi da 1 a 100\n");

    for(n1=2; n1<101; n1++) 
	{       
    	for(n2=2; n2<n1; n2++) 
			{    
            	if(n1%n2==0) 
                ris=0;          
        	}
        if(ris) 
            printf("%d e' un numero primo \n", n1);
        ris=1;
    }
}
