/*
autore: Conti Gallenti Matias
classe: 3H
data: 05/10/2022

imput: due numeri interi
elaborazione: resto divisione tra due numeri
output: resto
*/

#include "stdio.h" //printf, scanf
int main()
{
	//dichiariamo la variabile di input
	int num1, num2;
	//e output
	int resto;
	
	//input: due numeri
	printf("Matias Conti Gallenti\n");
	printf("inserisci il primo numero intero\n");
	scanf("%d", &num1);
	printf("inserisci il secondo numero intero\n");
	scanf("%d", &num2);

resto = num1 % num2; //calcolo del resto

	//output
	printf("il risultato è %d", resto);// stampa risultato
	
	//termine del programma
	return 0;
}

