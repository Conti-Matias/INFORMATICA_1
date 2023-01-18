/*******************************************************************************************
* \mainpage 																			   *
*1) Scrivere una funzione chiamata "mcd" che prende in input due numeri interi e           *
*  restituisce il loro massimo comune divisore utilizzando l'algoritmo di Euclide.         *
2)Scrivere una funzione chiamata "somma_divisori" che prende in input un numero            *
*  intero e restituisce la somma dei suoi divisori.                                        *
3)Scrivere una funzione chiamata "area_rettangolo" che prende in input la base             *
*  e l'altezza di un rettangolo e restituisce l'area. 									   *
* @author Conti Gallenti Matias                                                            *
* @date 11/01/2023                                                                         *                                                                                        
********************************************************************************************/
#include <stdio.h>   
#include <stdlib.h>    
#define N 15
#define C 5

int MCD(int, int);
int somma_divisore(int);
int area_rettangolo(int, int);

int main()
{
	//MCD
	int f=0;
	int r=0;
	int n1;
	int ris=0;
	int base, altezza;
	f=MCD(N,C);
	printf("l'MCD tra 15 e 5 e' %d\n",f);
	//somma_divisore
	printf("Inserisci il primo numero: ");
	scanf("%d",&n1);
	r=somma_divisore(n1);
	printf("la somma dei divisori e' %d\n",r);
	//area_rettangolo
	printf("Inserisci la base: ");
	scanf("%d",&base);
	printf("Inserisci l'altezza: ");
	scanf("%d",&altezza);
	ris=area_rettangolo(base, altezza);
	printf("%d",ris);
}

int MCD(int x, int y)//funzione per l'MCD
{
	int ris=0;
	while(y!=0)
	{
		ris=x%y;
		x=y;
		y=ris;
	}
	return x;
}

int somma_divisore(int x)//funzione per la somma dei divisori
{
	int ris=0;
	int i=0;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			ris=ris+i;	
		}	
	}
	return ris;
}

int area_rettangolo(int x, int y)//funzione per trovare 
{
	int r=0;
	r=x*y;
	return r;
}

