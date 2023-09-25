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

//conta caratteri stringa
int contaCaratteri(char[][C]);


int main() 
{
    char str[R][C];
    int r;
    caricaStringa(str);
	stampaStringa(str);
	r = contaCaratteri(str);

}
{
    for(int i = 0; i<R; i++)
    {
        printf("\n\n inserisci stringa(max 19 caratteri) ");
        scanf("%s", s[i]);
    }
}

void stampaStringa(char s[][C])
{
    for(int i = 0; i<R; i++)
    {
        printf("\n\nstringa %d: ", i);
        printf("%s", s[i]);
    }
}



