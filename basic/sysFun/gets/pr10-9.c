#include <stdio.h>
#include <stdlib.h>
#include "myLib.h"

int main(int argc, char *argv[])
{  char query[20];
  
   skipxy(9,4);
   printf("What's your name? ");
   gets(query);
   skipxy(9,1);
   printf("Hello, %s\n\n",query);
  
   system("PAUSE");	
   return 0;
}
