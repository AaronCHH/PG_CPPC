#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416
#define STEP 2

int main(int argc, char *argv[])
{  
   #ifdef PI
      printf("PI is defined as %f.\n",PI);
   #else
      printf("PI is NOT defined.\n");
   #endif

   #undef PI
   #if defined PI
      printf("PI is defined as %f.\n",PI);
   #else
      printf("PI is NOT defined.\n");
   #endif

   #if STEP==1
      printf("It is step 1.\n");
   #elif STEP==2
      printf("It is step 2.\n");
   #else
      printf("What step is it?\n");
   #endif
  
   system("PAUSE");	
   return 0;
}
