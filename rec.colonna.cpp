/*******************************************************************************************
* \mainpage 																			   *
* record																				   *
* @author Conti Gallenti Matias                                                            *
* @date 25/09/2023                                                                         *                                                                                        
********************************************************************************************/

//------------------------------------------------------------------------------------------
//=== INCLUDES =============================================================================
//------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <string.h>
#include <string.h>

#define N 20
#define V 10
#define C 5

struct data 
{
    int giorno;
    char mese[12];
    int anno;
} typedef data;

struct s_alunno
{
	int matricola;
    char cognome[N];
    char nome[N];
    data nascita;
    int voti[V];
} typedef s_alunno;

void caricaTab(s_alunno[]);
void stampaTab(s_alunno[]);

int main()
{
	s_alunno s1[C];
	srand(time(NULL));
    caricaTab(s1);
    stampaTab(s1);
}

void caricaTab(s_alunno s1[])
{
    for(int i=0;i<C;i++)
    {
    	s1[i].matricola=i+1;
	
    	printf("inserisci il cognome:");
		scanf("%s",s1[i].cognome);
	
		printf("inserisci il nome:");
		scanf("%s",s1[i].nome);
	
		printf("inserisci il giorno di nascita:");
		scanf("%s",&s1[i].nascita.giorno);
	
		printf("inserisci il mese di nascita:");
		scanf("%s",s1[i].nascita.mese);
		fflush(stdin);
	
		printf("inserisci l'anno' di nascita:");
		scanf("%s",&s1[i].nascita.anno);
	
		printf("\n");
		for(int j=0; j<V; j++)
            s1[i].voti[j] = rand()%10+1;
	}
}

void stampaTab(s_alunno s1[])
{
	printf("matricola\t\tcognome\t\tnome\t\tgiorno\t\tmese\t\tanno\t\tvoto");
	
}


