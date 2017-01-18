#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416
#define sqrSum(no1,no2) no1*no1+no2*no2
#define add(no1,no2) no1+no2
#define sub(no1,no2) no1-no2

int main(int argc, char *argv[])
{
   float fSum;
   int   jSum;
   
   fSum = sqrSum(2,4)+PI;
   printf("fSum is %f\n",fSum);
   jSum = add(2,2)*sub(6,6);
   printf("jSum is %d\n",jSum);
  
   system("PAUSE");	
   return 0;
}
