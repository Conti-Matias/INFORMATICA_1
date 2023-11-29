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
#define C 1

struct data 
{
    int giorno;
    int mese;
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
void stampa(s_alunno[]);
int ricercaCog(s_alunno[], char[]);
int stampaMedia(s_alunno[]);
int studenti10(s_alunno[]);
int OrdinaCog(s_alunno[]);

int main()
{
	s_alunno s1[C];
	srand(time(NULL));
	int r=0;
	char l[N];
    caricaTab(s1);
    stampa(s1);

    printf("\n\ncognome da cercare: ");
    scanf("%s", l);

    r = ricercaCog(s1, l);
    if(r!=-1) printf("\n\ncognome trovato: %s\n\n", s1[r].cognome, r);
    else printf("cognome non trovato\n\n");

    r = stampaMedia(s1);
    printf("\n %d hanno la media dei voti >= 6\n", r);

    r = studenti10(s1);
    printf("\nstudenti con almeno un 10: %d\n\n", r);
    
    r = OrdinaCog(s1);
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
	
		s1[i].nascita.giorno = rand()%30+1;
        s1[i].nascita.mese = rand()%12+1;
        s1[i].nascita.anno = rand()%30+1990;
	
		printf("\n");
		for(int j=0; j<V; j++)
            s1[i].voti[j] = rand()%10+1;
	}
}

void stampa(s_alunno s1[])
{
    printf("matricola\tcognome\t\tnome\tgiorno\t\tmese\t\tanno\t\tvoti\n");
	for(int i = 0; i<C; i++)
    {
        printf("%d%20s%17s%15d%15d%15d\t\t",s1[i].matricola,s1[i].cognome,s1[i].nome,s1[i].nascita.giorno,s1[i].nascita.mese,s1[i].nascita.anno);
        
        for(int j=0; j<V; j++)
            printf("%d",s1[i].voti[j]);
        printf("\n");
    }
    
    
}

int ricercaCog(s_alunno s1[], char cog[])
{
    for(int i = 0; i<C; i++)
    {
        if(strcmp(s1[i].cognome, cog) == 0) return i;
    }
    return -1;
}

int stampaMedia(s_alunno s1[])
{
    int c = 0;
    for(int i = 0, m=0; i < C; i++, m=0)
    {
        for(int j = 0; j<V; j++)
            m += s1[i].voti[j];
        m /= V;
        if(m>=6) 
			c++;
        printf("\nmedia studente %s: %d", s1[i].cognome, m);
    }
    return c;
}

int studenti10(s_alunno s1[])
{
    int c = 0;
    for(int i = 0; i<C; i++)
    {
        for(int j = 0; j<V; i++)
            if(s1[i].voti[j] == 10)
			{
                c++;
                j = V;
            }
    }
    return c;
}

int OrdinaCog(s_alunno s1[])
{
	s_alunno z;
	for(int i=0;i<C;i++)
	{
		for(int j=i+1;j<C;j++)
		{
			if(strcmp(s1[i].cognome, s1[j].cognome)>0)
			{
				z=s1[i];
				s1[i]=s1[j];
				s1[j]=z;
			}
		}
	}
}
