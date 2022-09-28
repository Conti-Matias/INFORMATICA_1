/*
file: media numeri
autore: Conti Gallenti Matias
classe: 3H
data: 28/09/2022

imput: tre numeri 
elaborazione: media
*/

#include "stdio.h" //printf, scanf
int main()
{
	//dichiariamo le tre variabili di input
	float num1, num2, num3;
	//e output
	float ris;
	
	//input: tre numeri 
	printf("inserisci il primo numero ");
	scanf("%f", &num1);
	printf("inserisci il secondo numero");
	scanf("%f", &num2);
	printf("inserisci il terzo numero ");
	scanf("%f", &num3);
	
	//elaborazione: media
	//assegniamo alla variabile ris
	//il risultato della espressione a destra
	ris = (num1 + num2 + num3) / 3.0;
	
	//output: un numero intero
	printf("il risultato è %.2f", ris);
	
	//termine del programma
	return 0;
}

