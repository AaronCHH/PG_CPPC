#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "myLib.h"

int main(int argc, char *argv[])
{  char ans;
   
   skipxy(9,4);
   printf("Want to go home?(y/n) ");
   ans=getch();
   skipxy(9,2);
   if (ans=='y')
      printf("OK, let's go!\n\n");
   else
      printf("Why not?\n\n");
 
   system("PAUSE");	
   return 0;
}
