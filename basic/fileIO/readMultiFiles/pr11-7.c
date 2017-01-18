#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int eng,math,i;
   float avg;
   FILE *inf;
   char idNo[20],fileName[20]="class?.in";

   i=2;
   fileName[5]='0'+i;
   inf=fopen(fileName,"r");
   while( (fscanf(inf,"%s",idNo)) != EOF){
      fscanf(inf,"%d%d",&eng,&math);
      avg=(float)(eng+math)/2;
      printf("%5s %4d %4d %5.1f\n",idNo,eng,math,avg);
   }
   fclose(inf);

   system("PAUSE");	
   return 0;
}
