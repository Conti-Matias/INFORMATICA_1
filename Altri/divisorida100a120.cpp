/** ****************************************************************************************
* \mainpage divisorida100a120
* @author Conti Gallenti Matias
* @date 19/12/2022
*/

#include <stdio.h>      
#define N 5
int main()  
{
    printf("Matias Conti Gallenti\n");
	int i=100,j=100; 
    for(i=100;i<=120;i++)
    {
    	for(j=100;j<=i;j++)
    	{
    		if(i%j==0)
    		printf("%d\n",j);
		}
	}
}
