/** ****************************************************************************************
* \mainpage es1pag166
* @author Conti Gallenti Matias
* @date 16/11/2022
*/

#include <stdio.h>
int main()
{
	int NUM;
	
	printf("Inserisci un intero");
	scanf("%d", &NUM);
	NUM-=NUM%2;	
	
	while (NUM>0)
	{
		printf("%d\n", NUM);
		NUM -= 2;	
	}
	return 0;		
}
