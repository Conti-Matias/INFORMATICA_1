/** ****************************************************************************************
* \mainpage c_maggioretratrenumeri.c
*
* @brief  Scrivere un programma che, richiesti in ingresso tre valori interi distinti,
* ne determini il minore e il maggiore.
* @author Conti Gallenti Matias
* @date 28/10/2022
*/

#include <stdio.h>

int main() 
{
  int a,b,c;	//input
  int max, min;	//output
  	
  printf("inserisci il primo numero: ");	//lettura variabili
  scanf("%d", &a);
  printf("inserisci il secondo numero: ");
  scanf("%d", &b);
  printf("inserisci il terzo numero: ");	//lettura variabili
  scanf("%d", &c);
    
  if (a>b) 
  {					
  	if (a>c) 
	  {									
  		max = a;								
  		if (c>b) 
		  {								
  			min = b;							
		  } 
		  else 
		  {								
		  	min = c;							
		  }										
	  } 
	  else 
	  {									
	  	max=c;									
	  	min=b;										
	  }											
  } 
  else 
  {				
  	if (a>c) 
	  {									
  		max = a;
		min = c	;
		}
  		else
  		{
  			max=c;
		    }
  		if (b>c) 
		  {								
  			max=b;								
		  }
		  else 
		  {								
		  	max=c;								
			}
		}
	 
	printf("il minore e' %d e il maggiore e' %d", min, max);
	
	return 0;
	}


