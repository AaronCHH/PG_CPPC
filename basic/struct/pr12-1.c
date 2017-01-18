#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stuData{
   char  idNo[10];
   int   eng,math;
   float avg;
};

int main(int argc, char *argv[])
{  struct stuData x={"2012A01",90,80},y;

   x.avg=(float)(x.eng+x.math)/2;
   printf("%s %3d %3d %5.1f\n",x.idNo,x.eng,x.math,x.avg);

   strcpy(y.idNo,"2012A02");
   y.eng=95;
   y.math=90;
   y.avg=(float)(y.eng+y.math)/2;
   printf("%s %3d %3d %5.1f\n",y.idNo,y.eng,y.math,y.avg);
   
   system("PAUSE");	
   return 0;
}
