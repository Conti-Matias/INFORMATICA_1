/** ****************************************************************************************
* \mainpage ugualeduenumeri
*
* @brief  Scrivere un programma che, richiesti due numeri interi qualsiasi, segnali se i due numeri sono uguali; in caso contrario indichi il minore e il maggiore. 
* 
* @author Conti Gallenti Matias
* @date 21/10/2022
*/

#include <stdio.h>

int main() {
  int num1;  //input
  
  //lettura variabili
  printf("Conti Gallenti Matias\n"); 
  printf("scrivi il prezzo speso: ");
  scanf("%d", &num1);
  
 if(num1>100)//confronto le due variabili
 {
 	num1=(num1/100)*90;
	printf("il prezzo e' %d", num1);
}
 else
 	if(num1>50)
 	{
 		num1=(num1/100)*95;
		printf("il prezzo e' %d", num1);
	}
	else
		printf("il prezzo e' %d", num1);
	
	return 0;//termine del programma
 }
