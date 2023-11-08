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
#include <time.h>

void writeLog(const char *);


int main(int argc, char *argv[]) 
{
    writeLog("Messaggio di log 1");
    writeLog("Messaggio di log 2");
    // Puoi chiamare writeLog() con altri messaggi
    return 0;
}


void writeLog(const char *message)
 {	
 	FILE *logFile;
	logFile = fopen("log.txt", "a");
    // Otteniamo il timestamp corrente
    time_t currentTime;
    struct tm *localTime;
    time(&currentTime);
    localTime = localtime(&currentTime);

    // Scriviamo il messaggio di log nel formato desiderato
    fprintf(logFile, "[%04d-%02d-%02d %02d:%02d:%02d] %s\n",
            localTime->tm_year + 1900, localTime->tm_mon + 1, localTime->tm_mday,
            localTime->tm_hour, localTime->tm_min, localTime->tm_sec, message);
}


