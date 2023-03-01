/*******************************************************************************************
* \mainpage 																			   *        																				   *
* @author Conti Gallenti Matias                                                            *
* @date 27/01/2023                                                                         *                                                                                        
********************************************************************************************/

//------------------------------------------------------------------------------------------
//=== INCLUDES =============================================================================
//------------------------------------------------------------------------------------------

#include <stdio.h>  // printf 
#include <stdlib.h> // exit  

int pari_dispari(int);
int fibonacci(int);
int somma_divisore(int);
void trova_numeri_amici(void);
int numeri_amici(int);
int somma_divisore2(int);
int menu(void);

int main()
{
	//variabile del menu
	int men;
	//variabili per pari_dispari
	int N;
	int f=0;
	//variabili per fibonacci
	int r=0;
	int ri=0;
	do
		{
		//menu
		men=menu();
		switch(men)
		{
			case 0:printf("arrivederci\n\n");
				break;
			//pari_dispari
			case 1:printf("inserire un numero intero\n\n");
				scanf("%d",&N);
				f=pari_dispari(N);
				if(f==1)
				{
					printf("e' dispari\n\n");
				}
				else
				{
					printf("e' pari\n\n");
				}
				break;
			//fibonacci
			case 2:printf("inserire un numero intero\n\n");
				scanf("%d",&ri);
				r=fibonacci(ri);
				break;
	       	//somma divisori
	       	case 3:printf("Inserisci il primo numero:\n\n");
		           scanf("%d",&N);
    	       	   r=somma_divisore(N);
    	       	break;
    	    //numeri amici
    	    case 4:trova_numeri_amici();
    	       	break;
	        default:printf("numero sbagliato\n\n");
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
	printf("digita 1 per calcolare se un numero e' pari o dispari\n\n");
	printf("digita 2 per fibonacci\n\n");
	printf("digita 3 per calcolare la somma dei divisori\n\n");
	printf("digita 4 per calcolare i numeri amici da 0 a 1500\n\n");
	printf("digita 0 per terminare\n\n");
	scanf("%d",&risp);
	return risp;	
}

int pari_dispari(int x)
{
	while(x>1)
	{
		x=x-2;
	}
	return x;
}

int fibonacci(int x)
{
	int a=0,b=1,c=0;
	int i;
	for(i=0;i<x;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("\n%d\n",c);
	}
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
			printf("\n%d\n",i);	
		}	
	}
	printf("\nla somma dei divisori e' %d\n",ris);
}

int numeri_amici(int x)
{
	int t,i;
	t=somma_divisore2(x);
	i=somma_divisore2(t);
	if(x==i)
		return t;
	else
		return 0;
}

void trova_numeri_amici()
{
	int i;
	int r;
	for(i=0;i<=1500;i++)
	{
		r=numeri_amici(i);
		printf("\n%d e %d sono amici\n",i,r);
	}
}

int somma_divisore2(int x)//funzione per la somma dei divisori
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
}
