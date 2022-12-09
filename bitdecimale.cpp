/** ****************************************************************************************
* \mainpage bitdecimale
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
    int n1=0, cont=7, int BIT;

    printf("inserire 8 bit\n");    
    do		//fare
		{
        	scanf("%d", &BIT);     //non ripete ogni volta la richiesta    
			n1 += pow(2, ris) * BIT;   //convero il bit in decimale
			cont=cont-1;                 //tolgo a cont 1       
    	} 	
	while (cont>-1);  //mentre cont è maggiore di -1             

    printf("binario=%d", n1);        
}
