#include <stdio.h>
#include <stdlib.h>

char *findName(char *ptr)
{
   while(*ptr!=0){
      if (*ptr=='i' && *(ptr+1)=='s' && *(ptr+2)==' ')
	 break;
      ptr++;
   }
   return ptr+3;
}

int main(int argc, char *argv[])
{  char str1[80]="My name is Jerry.";
   char *name;
   
   printf("%s\n",str1);
   name=findName(str1);
   printf("Your name is %s\n",name);

   system("PAUSE");	
   return 0;
}
