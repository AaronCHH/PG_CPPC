#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{  short i;
   FILE *outf;

   i=4321;
   outf=fopen("ascii.dat","w");
   fprintf(outf,"%d",i);
   fclose(outf);

   outf=fopen("binary.dat","wb");
   fwrite(&i,sizeof(i),1,outf);
   fclose(outf);
  
   system("PAUSE");	
   return 0;
}
