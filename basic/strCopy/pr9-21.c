#include <stdio.h>
#include <stdlib.h>

void copyStr(char *ptr1,char *ptr2)
{  int i;
   i=0;
   while(1){
      ptr2[i]=ptr1[i];
      if (ptr1[i]==0) break;
      i++;
   }
}

int main(int argc, char *argv[])
{  char str1[10]="Hello",str2[10];

   copyStr(str1,str2);
   printf("%s\n",str1);
   printf("%s\n",str2);

   system("PAUSE");	
   return 0;
}
