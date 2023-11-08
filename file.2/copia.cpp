/*                                                                                  
*********************************************************************************************/

//------------------------------------------------------------------------------------------
//=== INCLUDES =============================================================================
//------------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 void copiafile(char fin[],char fout[]);


 int main(int argc, char *argv[]) 
 {
    if (argc != 3)
	{
        printf("Utilizzo: %s [input_file] [output_file]\n", argv[0]);
        return 1;
 	}

 	char *input_file = argv[1];
  	char *output_file = argv[2];
  	  
  	copiafile(input_file, output_file);

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
	


