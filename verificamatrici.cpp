/*******************************************************************************************
* \mainpage 																			   *
* vettori																				   *
* @author Conti Gallenti Matias                                                            *
* @date 13/09/2023                                                                         *                                                                                        
********************************************************************************************/

//------------------------------------------------------------------------------------------
//=== INCLUDES =============================================================================
//------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

#define R 10
#define C 10

int menu();
void casualiMat (int [][]);
void stampaMat (int [][]);
void dispari(int [][], int);
int pariMat(int [][]);
int conta (int [][], int, int);
void ScambiaMat (int [][], int);
void Diagonale(int [][]);
void PitagoricaMat(int [][]);
void stampavettori(int []);


int main()
{
	int n1,n2,n3,r,v[N],v2[N];
	do
	{
		r=menu();
        switch(r)
        {
        	case 0:printf("Fine programma \n");
                   break;
            case 1:	printf("inserire numero\n");
            	    scanf("%d",&n1);
				    if(n1%2!=0)
				    	n1++;
				    Carica(v,n1);
				   break;
			
            case 6:stampavettori(v);
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
    printf("digita 1 Carica\n");
    printf("digita 2 NuovoInserisci\n");
    printf("digita 3 Conta\n");
    printf("digita 4 Massimo\n");
    printf("digita 5 Stampa\n");
    printf("digita 6 Stampavettore\n");
    scanf("%d",&risp);
    return risp;
}

void casualiMat (int m[][C])
{
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			m[i][j]= rand() % 11+10;	
		}
	}
	
}

void stampaMat (int m [][C])
{
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			printf("%d\t",m[i][j]);	
		}
		printf("\n");	
	}
}

void dispari(int m[][C], int Y)
{
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			if(m[i][j]%2!=0)
				m[i][j]=Y;
		}
		printf("\n");	
	}
}

int pariMat(int m[][C])
{
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			if(m[i][j]%2!=0)
				return 0;
		}
		printf("\n");	
	}
	return 1;
}

int conta (int m[][C],int k,int x)
{
	int cont=0;
	for(int j=0;j<R;j++)
		{
			if(m[j][K]%x==0)
				cont++;
		}	
	return cont;
}

void ScambiaMat (int m[][C],int x)
{
	int cont=0;
	for(int j=0;j<C;j++)
		{
			if(m[j][K]%x==0)
				cont++;
		}	
	return cont;
}

void Diagonale(int m[][C])
{
	for(int i=0,j=0;i<R;i++,j++)
	{
		m[i][j]=1;
	}
	for(int i=R-1,j=C-1;i>=0;i--,j--)
	{
		m[i][j]=0;
	}
}

void PitagoricaMat(int m[][C])
{
	c=1;
	for(int i=0;i<R;i++,c++)
	{
		for(int j=0;j<C;j++)
		{
			m[i][j]= m[i][j];	
		}
	}
}
