/*  legge  carattere per carattere il contenuto del file in.txt e lo ricopia nel file out.txt. 
* 2)Scrivi  un  programma  che  legge  il  file  nomi.txt e  scrive  un  file  NOMI2.TXT,  
*  dove  tutti  i  nomi  sono stati trasformati in caratteri maiuscoli.
* 3)Scrivi un programma che conta i caratteri, le parole e le righe presenti in un file di testo (non gli spazi, tabulazioni e a capo)
* 4)Scrivi un programma che legge il file numeri.txt (cifre numeriche ascii)composto da una sequenza
*  di numeri di una cifra separati da uno spazio bianco e successivamente scrive 2 file, pari.txt e dispari.txt,
*  nei quali dovrai inserire i numeri che hai letto a seconda del loro valore pari o dispari
*5)Scrivere le funzioni cesareCrypt e cesareDecrypt che criptano o decriptano un file in input di una chiave key,
*  usando l’algoritmo di Cesare.                                                                                     
*********************************************************************************************/

//------------------------------------------------------------------------------------------
//=== INCLUDES =============================================================================
//------------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 void copiafile(char fin[],char fout[]);


 int main(int argc, char *argv[]) 
 {
    if (argc != 3)
	{
        printf("Utilizzo: %s [input_file] [output_file]\n", argv[0]);
        return 1;
 	}

 	char *input_file = argv[1];
  	char *output_file = argv[2];
  	  
  	copiafile(input_file, output_file);

  }


void copiafile(char fin[],char fout[])
{
	FILE * err1=fopen(fin,"r");
    FILE * err2=fopen(fout,"w");
    char c;
    

    if(err1 != 0 && err2 != 0)
    {
        printf("i file sono stati aperti \n");
        while((c=fgetc(err1))!=EOF)
        {
            fputc(c,err2);
        }

        fclose(err1);
        fclose(err2);
    }
    else
    {
        printf("file non aperti\n");
    }

}  
	


