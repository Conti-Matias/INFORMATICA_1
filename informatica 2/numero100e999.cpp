/** ****************************************************************************************
* \mainpage numerotra100e999
*
* @brief Dato un numero inserito dall’utente, compreso tra 100 e 999, stampalo in modo che ogni cifra sia separata dalle altre da uno spazio.
* Il progetto accetta ogni tipo di numero tra 100 e 999
* 
* @author conti gallenti matias
* @date 07/10/2022
*/


#include <stdio.h>

int main() {
  int num;  //input
  int n1, n2, n3; //output
  
  printf("Inserisci un numero tra 100 e 999: ");  //richiesta del numero all'utente
  scanf("%d", &num);
  
  n1 = num / 100;   //calcolo prima cifra
  n2 = (num - n1 * 100) / 10;  //calcolo seconda cifra
  n3 = (num - (n1*100 + n2*10));   //calcolo terza cifra
  
  printf("%d \t %d \t %d \t", n1, n2, n3);  //stampa a schermo
  }


