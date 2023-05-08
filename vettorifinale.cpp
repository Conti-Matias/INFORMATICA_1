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

int menu();

int caricavettore(int v[]);

void caricarandom(int v[]);

void scambia(int *x, int *y);

void stampavettori(int v[]);

void ordinavettore(int v[]);

int ricercasequenziale(int v[],int x);

void ordinamentobubblesort(int v[]);

int contaMultipli(int[],int x);

void shiftSinistra(int[],int x);

void shiftDestra(int[],int x, int y);

int ricercaBinariaDicotomica(int[], int x);

int RicBinDic(int[], int x, int inf, int sup);

int main()
{
    int v[N];
    int cont=0,i,r,n1=0,n2,ris=0;

        do
    {
        r=menu();
        switch(r)
        {
            case 0: printf("Fine programma \n");
                    break;
            case 1: r=caricavettore(v);
                    break;
            case 2: caricarandom(v);
                    break;
            case 3: printf("\ni numeri nel vettore sono\n");
                    stampavettori(v);
                    break;
            case 4: printf("\ni numeri nel vettore sono ordinati\n");
                    ordinavettore(v);
                    break; 
			case 5: printf("\ni numeri nel vettore sono ordinati\n");     
					ordinamentobubblesort(v); 
					break;     
			case 6: printf("Inserisci un numero: \n");
			   		scanf("%d",&n1);
			  		ris=contaMultipli(v, n1);
    		   		printf("\n%d\n", ris);
    		   		break;  
			case 7: printf("Inserisci il numero dell'indice: \n");
			   		scanf("%d",&n1);
			   		shiftSinistra(v, n1);
					break;          
			case 8: printf("Inserisci il numero dell'indice: \n");
			   		scanf("%d",&n1);
			   		printf("Inserisci l'elemento da inserire: \n");
			   		scanf("%d",&n2);
			   		shiftDestra(v, n1, n2);
					break;   
			case 9: caricarandom(v);
					stampavettori(v);
					ordinavettore(v);
					stampavettori(v);
					printf("Inserisci il numero \n");
			   		scanf("%d",&n1);
			   		ris=ricercaBinariaDicotomica(v, n1);
			   		printf("%d\n",ris);
					break;       
			case 10:caricarandom(v);
					stampavettori(v);
					ordinavettore(v);
					stampavettori(v);
					printf("Inserisci il numero  \n");
			   		scanf("%d",&n1);
			   		ris=ricercaBinariaDicotomica(v, n1, 0, N-1);
			   		printf("%d\n",ris);
					break;       
            default: printf("hai inserito un numero sbagliato\n");                           
        }
        system("pause");
		system("cls");
    }
    while(r!=0);

    return 0;
}


int menu()
{
    int risp;
    printf("Matias Conti Gallenti \n");
    printf("\ndigita 0 se vuoi uscire dal programma\n");
    printf("digita 1 per inserire i numeri da tastiera\n");
    printf("digita 2 per caricare numeri randomici\n");
    printf("digita 3 per stampare il vettore\n");
    printf("digita 4 per ordinare il vettore\n");
    printf("digita 5 per ordinare il vettore in metodo bubblesort\n");
    printf("digita 6 per contare i multipli\n");
    printf("digita 7 per fare shift sinistra\n");
    printf("digita 8 per fare shift destra\n");
    printf("digita 9 per fare la ricerca dicotomica\n");
    printf("digita 10 per fare la ricerca dicotomica ricorsiva\n");
    scanf("%d",&risp);
    return risp;
}

int caricavettore(int v[])
{
    int cont,i;
    for(i=0;i<N;i++)
    {
        printf("inserisci 10 numeri: ");
        scanf("%d",&v[i]);
    }
    return *v;
}

void caricarandom(int v[])
{
    srand(time(NULL));
    for(int i = 0; i<N; i++)
    {
        v[i] = rand()%50 + 1;
    }
}

void stampavettori(int v[])
{
        for(int c = 0; c<N; c++)
    {
        printf("%d\t ", v[c]);
    }
    printf("\n\n");

    
}

void ordinavettore(int v[])
{
    int z,i,j;
    
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(v[i]<=v[j])
            {
                scambia(&v[i],&v[j]);
            }
        }
    }
}

void ordinamentobubblesort(int v[])
{
	int fine = N-1;
    int scambio = 0;
    int z, c;

    do
    {
        scambio = 0;
        for(int i = 0; i<fine; i++)
        {
            if(v[i]>v[i+1])
            {
                scambio=1;
                scambia(v,v);
            	c=i;
            }
        }
        fine=c;
    } 
	while(scambio==1);
}

void scambia(int *x, int *y)
{
    int z;
    z = *x;
    *x = *y;
    *y = z; 
}

int contaMultipli(int v[], int x)
{
    int c=0;

    for(int i = 0; i<N; i++)
    {
        if(v[i]%x==0)
		c++;
    }
    return c;
}

void shiftSinistra(int v[],int x)
{
	for(int i=x;i<N-1;i++)
	{
		v[i]=v[i]+1;
	}
	v[N-1]=0;
}


void shiftDestra(int v[],int x, int y)
{
	for(int i=N-2;i>=x;i--)
	{
		v[i+1]=v[i];
	}
	v[x]=y;
}

int ricercaBinariaDicotomica(int v[], int x)
{
	int inf=0,sup=N-1;
	int media=0;
	do
	{
		media=(inf+sup)/2;
		if(v[media]>x)
			sup=media+1;
		if(v[media]<x)
			inf=media+1;
		if (inf>sup)
		return -1;
	}
	while(v[media]!=x);
		return media;
}	

int RicBinDic(int v[], int x, int inf, int sup)
{
	media=0;
	if(inf>sup)
		return-1;
	media=(inf+sup)/2;
	if(v[media]==x)
		return media;
	if(v[media]>x)
		return RicBinDic(v, x, inf, inc-1);
	if(v[media]<x)
		return RicBinDic(v, x, media+1, sup);
}
