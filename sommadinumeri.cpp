/*
file: somma interi
autore: ContiGallenti Matias
classe: 3H
data: 21/09/2022

somma di due numeri interi da tastiera e stampa
a schermo del risultato

imput: due numeri interi
elaborazione: somma
*/

#include "stdio.h" //printf, scanf
int main()
{
	//dichiariamo le due variabili di input
	int num1, num2;
	//e output
	int ris;
	
	//input: due numeri interi
	printf("inserisci il primo numero ");
	scanf("%d", &num1);
	printf("inserisci il secondo numero");
	scanf("%d", &num2);
	
	//elaborazione: somma
	//assegniamo alla variabile ris
	//il risultato della espressione a destra
	ris = num1 + num2;
	
	//output: un numero intero
	printf("il risultato è %d", ris);
	
	//termine del programma
	return 0;
}

