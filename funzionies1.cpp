/*******************************************************************************************
* \mainpage funzione somma                                                                 *
* @author Conti Gallenti Matias                                                            *
* @date 11/01/2023                                                                         *                                                                                        *
********************************************************************************************/
#include <stdio.h>      
#define N 5
#define n 3
int somma (int , int);
int main()  
{
   int r=0;
   r=somma (n,N);
   printf("%d",r);
}

int somma(int x, int y)
{
	int s;
	s=x+y;
	return s;
}

