#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  
   printf("Print random integers\n");
   
   for(i=1;i<=3;i++) printf("%d ",rand());
   
   srand(1);
   for(i=1;i<=3;i++) printf("%d ",rand());
   
   printf("\n");
  
   system("PAUSE");	
   return 0;
} 
