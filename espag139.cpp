/** ****************************************************************************************
* \mainpage ugualeduenumeri
* 
* @author Conti Gallenti Matias
* @date 04/11/2022
*/

#include <stdio.h>

int main() {
  int t;  //input
  
  //lettura variabili
  printf("Conti Gallenti Matias\n"); 
  printf("scrivi la temperatura in numero intero: ");
  scanf("%d", &t);
  
 if(t>30)//confronto le due variabili
 {
	printf("molto caldo");
}
 else
 	if(20<t<30)
 	{
		printf("caldo");
	}
	else
		if(10<t<20)
		{
			printf("ideale");
		}
			else
			{
				printf("freddo");
			}
			
			return 0;//termine del programma
 }
