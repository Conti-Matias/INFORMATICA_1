/*******************************************************************************************
* \mainpage 																			   *
* stringhe																				   *
* @author Conti Gallenti Matias                                                            *
* @date 25/09/2023     
* 1)carica                                                                     *                                                                                        
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
#define R 10

//carica stringa
void caricaStringa(char[][C]);

//stampa stringa
void stampaStringa(char[][C]);

//restituisce indice parola più lunga
int indiceLunga(char [][C]);


void scambia(char [][C], int,int);


int primaAlfabeto(char [][C]);


void ordina(char [][C]);


int main()
{
	printf("Matias Conti Gallenti");
    char str[R][C];
    int r,t;
    caricaStringa(str);
	stampaStringa(str);
	r = indiceLunga(str);
	printf("l'indice e' %d",r);
	scambia(str,2,5);
	t=primaAlfabeto(str);
	printf("\nprima parola in ordine alfabetico: %s\n", str[t]);
	ordina(str);
    	stampaStr(str)

}

//nella funzione si chiedano all’utente R stringhe di lunghezza massima C-1//
void caricaStringa(char s[][C])
{
    for(int i = 0; i<R; i++)
    {
        printf("\n\n inserisci stringa(max 19 caratteri) ");
        scanf("%s", s[i]);
    }
}

//stampa sul monitor le stringhe seguite dalla loro lunghezza. Curare la visualizzazione su monitor//
void stampaStringa(char s[][C])
{
	int f=0;
    for(int i = 0; i<R; i++)
    {
        f=strlen(s[i]);
		printf("\nstringa %d: ", i);
        printf("%s\t\t%d\n", s[i],f);
    }
}

//la funzione restituisce l’indice della riga dove è memorizzata la stringa più lunga e visualizza nel main la stringa//
int indiceLunga(char s[][C])
{
    int max = 0;
    for(int i = 1; i<R; i++)
    {
        if(strlen(s[i])>strlen(s[max])) max = i;
    }
    return max;
}

/*nella funzione si scambiano tra di loro le stringhe di indice k e t .  
Eseguita la funzione la stringa della riga k+1 (indice k)  si trovi nella riga t+1 e quella della riga t+1 si trovi nella riga k+1 */
void scambia(char s[][C], int k, int t)
{
	char z[C];
	strcpy(z,s[k]);
	strcpy(s[k],s[t]);
	strcpy(s[t],z);
}

// la funzione restituisce l’indice della stringa che è la prima in ordine alfabetico//
int primaAlfabeto(char s[][C])
{
	int pri=0;
    for(int i = 1; i<R; i++)
    {
        if(strcmp(s[pri],s[i])>0) 
		pri=i;
    }
    return pri;
}

//terminata l’esecuzione della funzione, tutte le stringhe sono in ordine alfabetico//
void ordina(char stmat[][C])
{
    for(int i = 0; i<R-1; i++)
    {
        for(int j = i+1; j<R; j++)
        {
            if(strcmp(stmat[i], stmat[j]) > 0)
            {
                scambia(stmat, i, j);
            }
        }
    }
}

