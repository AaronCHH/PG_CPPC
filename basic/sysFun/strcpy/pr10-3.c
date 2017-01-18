#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
   char str1[10]="Hello",str2[10];
   
   strcpy(str2,str1);
   printf("%s\n",str1);
   printf("%s\n",str2);
  
   system("PAUSE");	
   return 0;
}
