#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
   float x,y,a,dx,area;
   int i,cnt;
 
   printf("Calculate area:\n");
   cnt=1000;
   dx=3.1416/cnt;
   area=0; x=0;
   for(i=1;i<=cnt;i++){
      x=x+dx;
      y=sin(x);
      a=y*dx;
      area=area+a;
   }
   printf("area is %f\n",area);
  
   system("PAUSE");	
   return 0;
}
