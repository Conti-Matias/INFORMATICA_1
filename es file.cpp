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
void copiaCarMaiuscoli(char[],char[]);

int main()
{
    copiaFile("in.txt", "Out.txt");
    copiaCarMaiuscoli("nomi.txt", "NOMI2.txt");
   
}


void copiaFile(char fileIn[], char fileOut[])
{
	FILE * err1;
	FILE * err2;
	char c;
    //apro i due file
    err1 = fopen(fileIn, "r");
    err2 = fopen(fileOut, "a");

    //finché il file In non finisce
    if(err1 !=0 && err2 != 0)
    {
    	printf("i file sono stati aperti correttamente\n");
		while((c=getc(err1)) !=EOF)
    	{
        	//copio carattere in Out
        	fputc(c,err2);
    	}
    	fclose(err1);
    	fclose(err2);
	}
	else 
    {
    	printf("i file non sono stati aperti");
	}
}
    
void copiaCarMaiuscolo(char filenomi[], char fileNOMI2[])
{
    FILE * err1;
	FILE * err2;
	char c;
    //apro i due file
    err1 = fopen(filenomi, "r");
    err2 = fopen(fileNOMI2, "a");

    //finché il file In non finisce
    if(err1 !=0 && err2 != 0)
    {
    	printf("i file sono stati aperti correttamente\n");
		while((c=getc(err1)) !=EOF)
    	{
    		if(c >= 'a' && c <= 'z')    
				c-=32;
        	//copio carattere in Out
        	fputc(c,err2);
        	
    	}
    	fclose(err1);
    	fclose(err2);
	}
	else 
    {
    	printf("i file non sono stati aperti");
	}
}
    	


