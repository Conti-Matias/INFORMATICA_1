/** ****************************************************************************************
* \mainpage c_maggioretraduenumeri.c
*
* @brief  Scrivere un programma che, richiesti in ingresso due valori interi distinti, 
* ne stampi a schermo il minore.
* @author Conti Gallenti Matias
* @date 26/10/2022
*/

#include <stdio.h>

int main() {
  int num1, num2;  //input
  
  //lettura variabili
  printf("Conti Gallenti Matias\n"); 
  printf("Inserisci il primo numero: ");
  scanf("%d", &num1);
  printf("Inserisci il secondo numero: ");
  scanf("%d", &num2);
  
 if(num1>num2)//confronto le due variabili
 	printf("%d", num2);
 else;
 	printf("%d", num1);

	return 0;//termine del programma
 }
