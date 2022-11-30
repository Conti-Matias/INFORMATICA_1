/** ****************************************************************************************
* \mainpage coppiedinumeri
* Scrivere un programma che visualizzi tutte le 
* coppie ordinate di numeri naturali la cui somma è 15.
* @author Conti Gallenti Matias
* @date 30/11/2022
*/

#include <stdio.h>

int main() 
{
	int n1=15,n2=0,n3=0;
	
	do
	{
		n1=n1-1;
		n2=n2+1;
		n3=n3+1;
		printf("%d+%d\t",n2,n1);
	}
	while(n3<7);
	return 0;
}

