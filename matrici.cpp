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

#define R 5
#define C 5

int menu();
void CaricaMatriceRandom(int[][C]);
void CaricaMatrice(int[][C]);
void StampaMatrice(int[][C]);
void DiagonaleMatrice(int[][C]);


int main()
{
	int matrice[R][C],r;
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
