#include <stdio.h>
#include <stdlib.h>
#include <conio.h.>
#include "myLib.h"

void sub1()
{  system("cls");
   skipxy(9,5); printf("sub1 is done. Press any key!");
   getche();
}

void sub2()
{  system("cls");
   skipxy(9,5); printf("sub2 is done. Press any key!");
   getche();
}

int main(int argc, char *argv[])
{  char c;

   while(1){
      system("cls");
      skipxy(9,5);  printf("1. Run sub1");
      skipxy(9,2);  printf("2. Run sub2");
      skipxy(9,2);  printf("0. Good bye");
      skipxy(9,2);  printf("Select 0-2: ");

      c=getche();
      switch(c){
	     case '1': sub1(); break;
	     case '2': sub2(); break;
	     case '0': exit(0);
      }
   }
}
