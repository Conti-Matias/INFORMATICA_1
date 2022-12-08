/** ****************************************************************************************
* \mainpage fattorialenumero
* Scrivere un programma che converte un numero binario a 8 bit in un numero decimale. 
* L’utente inserisce le cifre del numero binario un bit alla volta, partendo dal bit più significativo. 
* Il programma dovrà visualizzare il numero decimale corrispondente. Suggerimento: per calcolare le potenze
* di 2 utilizzare la funzione pow includendo la libreria math.h.
* @author Conti Gallenti Matias
* @date 08/12/2022
*/

#include <stdio.h>     
#include <math.h>

int main()  
{
    printf("Matias Conti Gallenti\n");
    int n1=0, ris=7,BIT;

    printf("inserire 8 bit\n");    
    do
		{
        	scanf("%d", &BIT);          
			n1 += pow(2, ris) * BIT;   
			ris=ris-1;                       
    	} 	
	while (ris>-1);               

    printf("binario=%d", n1);         
}
