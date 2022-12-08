/** ****************************************************************************************
* \mainpage fattorialenumero
* Si scriva un programma che calcoli il fattoriale di un numero intero N 
* dato dalla tastiera. Si ricordi che il fattoriale di un numero n (simbolo n!)
* viene calcolato con la seguente formula: n! = n ·(n–1)·(n–2)· ... ·2 ·1.
* @author Conti Gallenti Matias
* @date 08/12/2022
*/

#include <stdio.h>      

int main()  
{
    printf("Matias Conti Gallenti\n");
    int n1, ris;        

    printf("Inserisci un numero:\n ");    
    scanf("%d", &n1);

    if(n1>0) 
		{                           
        	for(ris=n1-1; ris>0; ris--) 
				{
            	n1 *= ris;                   
       			}

        printf("il fattoriale e' %d", n1);    
   		}
    else 
		{
        	printf("non e' possibile calcolare il fattoriale");     
   		}
}