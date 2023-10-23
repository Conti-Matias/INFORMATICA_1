/*******************************************************************************************
* \mainpage 																			   *
* file																				   	   *
* @author Conti Gallenti Matias                                                            *
* @date 23/10/2023     
* 1)Scrivi  un  programma  che  esegue  la  copia  di  un  file  di  testo.
* 	Il programma  legge  carattere per carattere il contenuto del file in.txt e lo ricopia nel file out.txt. 
* 2)Scrivi  un  programma  che  legge  il  file  nomi.txt e  scrive  un  file  NOMI2.TXT,  dove  tutti  i  
* 	nomi  sono stati trasformati in caratteri maiuscoli.
* 3)Scrivi un programma che conta i caratteri, le parole e le righe presenti in un file di testo (non gli spazi, tabulazioni e a capo)
* 4)Scrivi un programma che legge il file numeri.txt (cifre numeriche ascii)composto da una sequenza 
* 	di numeri di una cifra separati da uno spazio bianco e successivamente scrive 2 file, pari.txt e dispari.txt, 
* 	nei quali dovrai inserire i numeri che hai letto a seconda del loro valore pari o dispari
* 5)Scrivere le funzioni cesareCrypt e cesareDecrypt che criptano o decriptano un file in input di una chiave key, 
* 	usando l’algoritmo di Cesare. Commentare adeguatamente il codice scritto.
*                                                                                        
********************************************************************************************/

//------------------------------------------------------------------------------------------
//=== INCLUDES =============================================================================
//------------------------------------------------------------------------------------------
#include <stdio.h>

void copiaFile(char[],char[]);

int main()
{
    copiaFile("./file/copiaFile/in.txt", "./file/copiaFile/out.txt");
}


void copiaFile(char fileIn[], char fileOut[])
{
    //apro i due file
    FILE * puntIn = fopen(fileIn, "r");
    FILE * puntOut = fopen(fileOut, "w");

    //finché il file In non finisce
    while(!feof(puntIn))
    {
        //copio prossimo carattere in Out
        putc(getc(puntIn), puntOut);
    }
}



