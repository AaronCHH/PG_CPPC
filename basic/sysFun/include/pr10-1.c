#include <stdio.h>
#include <stdlib.h>
#include "myLib.h"

int main(int argc, char *argv[])
{
   char str1[10]="Hello",str2[10];
   
   copyStr(str1,str2);
   printf("%s\n",str1);
   printf("%s\n",str2);
  
   system("PAUSE");	
   return 0;
}
