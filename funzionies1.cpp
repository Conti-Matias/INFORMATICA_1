/*******************************************************************************************
* \mainpage 										   *									   *
*1) Scrivere una funzione chiamata "mcd" che prende in input due numeri interi e           *
*  restituisce il loro massimo comune divisore utilizzando l'algoritmo di Euclide.         *
2)Scrivere una funzione chiamata "somma_divisori" che prende in input un numero            *
*  intero e restituisce la somma dei suoi divisori.                                        *
3)Scrivere una funzione chiamata "area_rettangolo" che prende in input la base             *
*  e l'altezza di un rettangolo e restituisce l'area. 					   *				   *
* @author Conti Gallenti Matias                                                            *
* @date 11/01/2023                                                                         *                                                                                        
********************************************************************************************/
#include <stdio.h>   
#include <stdlib.h>   

int MCD(int, int);
int somma_divisore(int);
int area_rettangolo(int, int);
int menu(void);

int main()
{
	//variabile del menu
	int men;
	//variabili per l'MCD
	int f=0;
	int N,n;
	//variabili per la somma dei divisori
	int r=0;
	int n1;
	//variabili per l'area del rettangolo
	int ris=0;
	int base, altezza;
	do
		{
		//menu
		men=menu();
		switch(men)
		{
			case 0:printf("arrivederci");
				break;
			//MCD
			case 1:printf("inserire il primo numero\n");
			       scanf("%d",&N);
			       printf("inserire il secondo numero\n");
			       scanf("%d",&n);
			       f=MCD(N,n);
			       printf("l'MCD e' %d\n",f);
				break;
			//somma_divisore
			case 2:printf("Inserisci il primo numero:\n");
		           scanf("%d",&n1);
    	       	   r=somma_divisore(n1);
	               printf("la somma dei divisori e' %d\n",r);
	       		break;
	        //area_rettangolo
	        case 3:printf("Inserisci la base:\n");
	               scanf("%d",&base);
	               printf("Inserisci l'altezza:\n");
	               scanf("%d",&altezza);
	               ris=area_rettangolo(base, altezza);
	               printf("%d",ris);
	    		break;
	        default:printf("numero sbagliato");
		}	
		 //codice per pulire lo schermo   
		system("pause");
			system("cls");
	}

while(men!=0);
}

int menu(void)//funzione per il menu
{
	int risp;
	printf("digita 1 per calcolare l'MCD\n\n");
	printf("digita 2 per calcolare la somma dei divisori\n\n");
	printf("digita 3 per calcolare l'area del rettangolo\n\n");
	printf("digita 0 per terminare\n\n");
	scanf("%d",&risp);
	return risp;	
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

int area_rettangolo(int x, int y)//funzione per trovare L'area del rettangolo
{
	int r=0;
	r=x*y;
	return r;
}

