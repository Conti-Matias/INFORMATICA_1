/*
autore: Conti Gallenti Matias
classe: 3H
data: 05/10/2022

imput: un numero
*/

#include "stdio.h" //printf, scanf
int main()
{
	//dichiariamo la variabile di input
	int secondi;
	//e output
	int ore, minuti;
	
	//input: un numero
	printf("Matias Conti Gallenti\n");
	printf("inserisci un numero di secondi ");
	scanf("%d", &secondi);

	minuti = (secondi - secondi % 60) / 60; //calcolio minuti totali
	ore = (minuti - minuti % 60) / 60; //calcolo ore totali
	secondi = secondi % 60; //calcolo minuti effettivi
	minuti = minuti % 60; //calcolo secondi effettivi

	//output
	printf("ore: %d, minuti: %d,, secondi: %d", ore, minuti, secondi);// stampa risultato
	
	//termine del programma
	return 0;
}

