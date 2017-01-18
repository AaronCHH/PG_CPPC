#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int i;
   FILE *outf;
   int ar[5] = {6,15,95,98,23};
  
   outf = fopen("out.txt","w");
   
   for(i=0; i<5; i++)
      fprintf(outf,"%d\n",ar[i]);
   
   fclose(outf);

   system("PAUSE");	
   return 0;
}
