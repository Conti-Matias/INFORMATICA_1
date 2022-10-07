/** ****************************************************************************************
* \mainpage lettura4numeri
*
* @brief Scrivi un programma che calcola l’area e il perimetro di un trapezio dopo aver letto i dati necessari
* accetta numeri positivi
* <specifiche del collaudo>
* 
* @author Conti Gallenti Matias
* @date 07/10/2022
* @version 1.0 <data> <Descrivere le modifiche apportate>
* @version 1.1 <data> <Descrivere le modifiche apportate>
*/

#include "stdio.h" //printf, scanf

int main()
{
	//dichiariamo le quattro variabili di input
	float b, B, L1, L2, H;
	//e output
	float perimetro, area;
	
	//input: lettura dei quattro valori
    printf("Conti Gallenti Matias\n");
	printf("\ninserisci la misura della base minore:");
	scanf("%f", &b);
	printf("\ninserisci la misura della base maggiore:");
	scanf("%f", &B);
	printf("\ninserisci la misura del primo lato:");
	scanf("%f", &L1);
	printf("\ninserisci la misura del secondo lato:");
	scanf("%f", &L2);
	printf("\ninserisci la misura dell'altezza:");
	scanf("%f", &H);

	
	perimetro = b + B + L1 + L2; //calcolo del perimetro
	area = ((B + b) * H) / 2; //calcolo dell'area	

    printf("il perimetro misura %.2f\n", perimetro); //scrittura perimetro
    printf("l'area misura %.2f", area); //scrittura area

	//termine del programma
	return 0;
}

