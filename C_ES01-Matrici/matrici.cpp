/*******************************************************************************************
* \mainpage 																			   *
* matrici																				   *
* @author Conti Gallenti Matias                                                            *
* @date 03/05/2023                                                                         *                                                                                        
********************************************************************************************/

//------------------------------------------------------------------------------------------
//=== INCLUDES =============================================================================
//------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

#define R 5
#define C 5

int col=0;

int menu();
void CaricaMatriceRandom(int[][C]);
void CaricaMatrice(int[][C]);
void StampaMatrice(int[][C]);
void DiagonaleMatrice(int[][C]);
int MaxMinMatrice(int[][C]);
int RicercaIndicePrimo(int[][C]);
int conta(int [][C],int x);

int main()
{
	int matrice[R][C],r,ris,ri,ril,n1;
	do
	{
		r=menu();
        switch(r)
        {
        	case 0:printf("Fine programma \n");
                   break;
			case 1:CaricaMatriceRandom(matrice);
            	   break;
            case 2:CaricaMatrice(matrice);
            	   break;
            case 3:StampaMatrice(matrice);
            	   break;   
			case 4:DiagonaleMatrice(matrice);    
			       break;
			case 5:ris=MaxMinMatrice(matrice); 
				   printf("%d\n",ris);  
			       break;
			case 6:ri=RicercaIndicePrimo(matrice); 
				   if(ri==-1)
				   		printf("non ci sono numeri primi\n");  
				   else
				   		printf("L'indice del numero primo è %d\n",ri); 
			       break;
			case 7:printf("inserire un numero che vuoi cercare:");
				   scanf("%d\n",&n1);
				   ril=conta(matrice,n1); 
				   printf("%d\n",ril);  
			       break;
            default: printf("hai inserito un numero sbagliato\n");                           
        }
        system("pause");
		system("cls");
    }
    while(r!=0);
}

int menu()
{
    int risp;
    printf("Matias Conti Gallenti \n");
    printf("\ndigita 0 se vuoi uscire dal programma\n");
    printf("digita 1 caricare la matrice in modo randomico\n");
    printf("digita 2 per caricare la matrice da te\n");
    printf("digita 3 per stampare la matrice\n");
    printf("digita 4 per stampare la matrice in diagonale\n");
    printf("digita 5 per stampare il numero piu grande nella matrice\n");
    printf("digita 6 per l'indice del numero primo nella matrice\n");
    printf("digita 7 per cercare quante volte un numero e' dentro la matrice\n");
    scanf("%d",&risp);
    return risp;
}
    
void CaricaMatriceRandom(int m[][C])
{
	int i=0;
	for(i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			m[i][j]= rand()%41 + 10;
		}
	}
}

void CaricaMatrice(int m[][C])
{
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			printf("inserire un numero per la matrice:");
			scanf("%d\n",&m[i][j]);
		}
	}
}

void StampaMatrice(int m[][C])
{
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			printf("%d\n",m[i][j]);
		}
	}
}

void DiagonaleMatrice(int m[][C])
{
	int i=0,j=0;
	for(i=0; i<R; i++)
	{
		printf("%d\n",m[i][i]);
	}
}

int MaxMinMatrice(int m[][C])
{
	int max=INT_MIN;
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			if(m[i][j]>max)
				max=m[i][j];
		}
	}
	return max;
}

int RicercaIndicePrimo(int m[][C])
{
	int cont=0;
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			for(int d=2;d<=m[i][j]/2;i++)
			{
				if(m[i][j]%i==0)
					cont++;
			}
			if(cont!=0)
				return -1;
			else
				col=j;
				return i;
		}
	}
}

int conta(int m[][C],int x)
{
	int cont=0;
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			if(m[i][j]==x)
				cont++;
		}
	}
	return cont;
}
