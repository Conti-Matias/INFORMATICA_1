/*                                                                                 
*********************************************************************************************/

//------------------------------------------------------------------------------------------
//=== INCLUDES =============================================================================
//------------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cesareCrypt(char[], char[], int);
void cesareDecrypt(char[], char[], int);


 int main(int argc, char *argv[])
  {
    if (argc != 5) 
	{
        printf("Utilizzo: %s [input_file] [output_file] [chiave] [azione (c/d)]\n", argv[0]);
        return 1;
 	}

 	  char *input_file = argv[1];
  	  char *output_file = argv[2];
  	  int chiave = atoi(argv[3]);
   	  char azione = argv[4][0];
   	  
   	  if(azione=='c')
   	  cesareCrypt(input_file, output_file, chiave);
   	  else
      cesareDecrypt(input_file, output_file, chiave);  
}

void copiafile(char fin[],char fout[])
{
	FILE * err1=fopen(fin,"r");
    FILE * err2=fopen(fout,"w");
    char c;
    

    if(err1 != 0 && err2 != 0)
    {
        printf("i file sono stati aperti \n");
        while((c=fgetc(err1))!=EOF)
        {
            fputc(c,err2);
        }

        fclose(err1);
        fclose(err2);
    }
    else
    {
        printf("file non aperti\n");
    }

}  
	
void cesareCrypt(char fin[],char fout[], int x)
{
    char c;
    FILE * err1;
    FILE * err2;

    err1=fopen(fin,"r");
    err2=fopen(fout,"w");

    if(err1 != 0)
    {
        printf("il file e' stato aperto correttamente\n");
        while((c=fgetc(err1))!=EOF)
            {
                c = fgetc(err1);
				if(c != '\n' ) 
					c += x;
					
				putc(c, err2);
            }
        fclose(err1);
        fclose(err2);
    }
    else
    {
        printf("file non aperto\n");
    }
}

void cesareDecrypt(char fin[],char fout[], int x)
{
    char c;
    FILE * err1;
    FILE * err2;

    err1=fopen(fin,"r");
    err2=fopen(fout,"w");

    if(err1 != 0)
    {
        printf("il file e' stato aperto correttamente\n");

        while((c=fgetc(err1))!=EOF)
        {
                c = fgetc(err1);
				if(c != '\n' ) 
					c -= x;
				putc(c, err2);
        }
        fclose(err1);
        fclose(err2);
    }
    else
    {
        printf("file non aperto\n");
    }
}

