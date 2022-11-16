/** ****************************************************************************************
* \mainpage es1pag166
* @author Conti Gallenti Matias
* @date 16/11/2022
*/

#include <stdio.h>

int main() 
{
	int n1,n2;
	int somma;
	printf("Conti Gallenti Matias\n"); 
	printf("scrivere quanti numeri si vogliono segnare");
	scanf("%d",&n1);
	while(n1!=0)
	{
		printf("scrivere un numero");
		scanf("%d",&n2);
		somma=somma+n2;
		n1=n1-1;
	}
	printf("la somma e' %d",somma);
    
    return 0;
}
  
