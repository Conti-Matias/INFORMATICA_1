
/** ****************************************************************************************
* \mainpage areaTrapezio
*
* @brief  Scrivi un programma che calcola l’area e il perimetro di un trapezio dopo aver letto i dati necessari
* Il progetto accetta solo numeri positivi e interi
* 
* @author Conti Gallenti Matias
* @date 07/10/2022
*/

#include <stdio.h>
#include <math.h>

int main() {
  int baseM, basem, altezza, lato1, lato2;  //input

  float area, perimetro;  //output
  
  //lettura variabili
  printf("Inserisci il valore della base maggiore: "); 
  scanf("%d", &baseM);
  
  printf("Inserisci il valore della base minore: ");
  scanf("%d", &basem);


  printf("Inserisci il valore dell'altezza: ");
  scanf("%d", &altezza);

  printf("Inserisci il valore del primo lato: ");
  scanf("%d", &lato1);
  
  printf("Inserisci il valore del secondo lato: ");
  scanf("%d", &lato2);
  
  
  area=(baseM+basem)*altezza/2.0; //calcolo area
  
  perimetro=baseM+basem+lato1+lato2; //calcolo perimetro
  
   //scrittura risultato
  printf("Area = %.2f", area);  
  printf("\nPerimetro = %.2f", perimetro);
 }

