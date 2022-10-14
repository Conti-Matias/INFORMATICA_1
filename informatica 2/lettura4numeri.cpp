/** ****************************************************************************************
* \mainpage lettura4numeri
*
* @brief Scrivi un programma che legge in ingresso 4 numeri che sono i coefficienti di un
 polinomio -ax^3 +bx^2 - c^x + d e valuta il suo valore in un punto x, sempre inserito dall’utente>
* accetta numeri positivi
* <specifiche del collaudo>
* 
* @author Conti Gallenti Matias
* @date 07/10/2022
* @version 1.0 <data> <Descrivere le modifiche apportate>
* @version 1.1 <data> <Descrivere le modifiche apportate>
*/

#include "stdio.h" //printf, scanf
#include "math.h"
int main()
{
	//dichiariamo le due variabili di input
	float a, b, c, d, x;
	//e output
	float risultato;
	
//input: lettura dei cinque valori
    printf("Conti Gallenti Matias\n");
	printf("\ninserisci il numero a:");
	scanf("%f", &a);
	printf("\ninserisci il numero b:");
	scanf("%f", &b);
	printf("\ninserisci il numero c:");
	scanf("%f", &c);
	printf("\ninserisci il numero d:");
	scanf("%f", &d);
	printf("\ninserisci il numero x:");
	scanf("%f", &x);
	
	risultato = (-a*(pow(x,3)) + b*(pow(x,2)) - c*x + d); //calcolo risultato	

    printf("il risultato è %.2f", risultato); //scrittura risultato

	//termine del programma
	return 0;
}

