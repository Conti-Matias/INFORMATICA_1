/** ****************************************************************************************
* \mainpage es1pag176
* @author Conti Gallenti Matias
* @date 18/11/2022
*/

#include <stdio.h>

int main() 
{
	int n2;
	int somma=0;
	printf("Conti Gallenti Matias\n"); 

	do
	{
		printf("scrivere un numero");
		scanf("%d",&n2);
		somma=somma+1;
	}
	while(n2!=0);
	somma=somma-1;
	printf("hai scritto %d numeri prima di inserire 0",somma);
    
    return 0;
}
