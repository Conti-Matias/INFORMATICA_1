/** ****************************************************************************************
* \mainpage tabellinada1a10
* @author Conti Gallenti Matias
* @date 19/12/2022
*/

#include <stdio.h>      
#define N 5
int main()  
{
    printf("Matias Conti Gallenti\n");
	int i,j; 
	int ris;      
	
    for(i=1;i<=10;i++)
    {
    	for(j=1;j<=10;j++)
    	{
    		ris=i*j;
    		if(j!=10)
				printf("%d\t",ris);
			else
				printf("%d\n",ris);
		}
	}
}
