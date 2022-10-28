/** ****************************************************************************************
* \mainpage c_trovachetriangoloè.c
*
* @brief  Scrivere un programma che, lette le misure dei lati di un triangolo,
* visualizzi se il triangolo è equilatero, isoscele o scaleno
* @author Conti Gallenti Matias
* @date 28/10/2022
*/

#include <stdio.h>

int main() 
{
	
	float l1, l2, l3;//input
	
	printf("Inserisci i valori dei tre lati:\n");//lettura variabili
	scanf("%f%f%f", &l1,&l2,&l3);
	
	if (l1==l2 || l2==l3 || l3==l1 )
		if (l1==l2 && l2==l3)
			printf("E' un triangolo equilatero");
		else
			printf("E' un triangolo isoscele");
	else 
		printf("E' un triangolo scaleno");
}
