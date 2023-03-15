/*******************************************************************************************
* \mainpage 																			   *
* vettori																				   *
* @author Conti Gallenti Matias                                                            *
* @date 06/03/2023                                                                         *                                                                                        
********************************************************************************************/

//------------------------------------------------------------------------------------------
//=== INCLUDES =============================================================================
//------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int menu(void);

void carica(int[]);

int contaMultipli(int[],int);

int contaPrimi(int[]);

void ordina(int[]);

void scambia(int*, int*);

int contaPrimi(int[]);

int ePrimo(int);

int main()
{	
	int vettore[N], r, max, min,men,n1;
//menu
	men=menu();
	switch(men)
	{
		case 0:printf("Inserisci un numero: \n");
			   scanf("%d",n1);
			   r = contaMultipli(vettore, n1);
    		   printf("\n%d\n", r);
    		   break;
    	case 1:r = contaPrimi(vettore);
    		   printf("\n%d\n", r);
    		   break;
    	case 2:ordina(vettore);
    		   break;
		default:printf("numero sbagliato\n\n");
	}	
	 //codice per pulire lo schermo   
	system("pause");
	system("cls");
}

int menu(void)//funzione per il menu
{
	int risp;
	printf("digita 1 per contare i multipli\n\n");
	printf("digita 2 per contare i primi\n\n");
	printf("digita 3 per ordinare\n\n");
	printf("digita 0 per terminare\n\n");
	scanf("%d",&risp);
	return risp;	
}

void carica(int vet[])
{
    for(int i = 0; i<N; i++)
    {
        printf("\ninserisci il %d° valore: ", i+1);
        scanf("%d", &vet[i]);
    }
}

int contaMultipli(int v[], int x)
{
    int c=0;

    for(int i = 0; i<N; i++)
    {
        if(v[i]%x==0);
		c++;
    }
    return c;
}

void ordina(int v[])
{
    for(int i = 0; i<N-1; i++)
    {
        for(int j = i+1; j<N; j++)
        {
            if(v[i]>v[j]) 
			scambia(&v[i], &v[j]);
        }
    }
}

void scambia(int *x, int *y)
{
    int z;
    z=*x;
    *x =*y;
    *y=z; 
}

int contaPrimi(int v[])
{
    int c=0, r;

    for(int i=0; i<N; i++)
    {
        r = ePrimo(v[i]);
        if(!r) c++;
    }
    return c;
}

int ePrimo(int x)
{
    int c=0;
    for(int i = 2; i<x/2; i++)
    {
        if(x%i==0) c++;
    }
    return  c;
}
