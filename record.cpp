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

#define C 20
#define V 20
#define R 10

struct data
{
	int giorno;
	char mese[12];
	int anno;
}typedef data;

struct alunno
{
	int matricola;
	char cognome[C];
	char nome[V];
	int voti[R];
	data nascita;
}typedef alunno;

void stampa(alunno);

int main()
{
	printf("Matias Conti Gallenti\n\n");
	alunno s1,s2;
	srand(time(NULL));
	printf("inserisci il cognome:");
	scanf("%s",s1.cognome);
	printf("inserisci il nome:");
	scanf("%s",s1.nome);
	printf("inserisci il giorno di nascita:");
	scanf("%s",&s1.nascita.giorno);
	printf("inserisci il mese di nascita:");
	scanf("%s",s1.nascita.mese);
	printf("inserisci l'anno' di nascita:");
	scanf("%s",&s1.nascita.anno);
	for(int i=0;i<R;i++)
		s1.voti[i]=rand()%10+i;
	s2=s1;
	printf("matricola 1");
	stampa(s2);
}
   
void stampa(s2)
{
	
}

