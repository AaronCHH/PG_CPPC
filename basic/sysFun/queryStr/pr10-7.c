#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
   char name[4][10] = {"John","Jerry","Mary","Jack"};
   char query[10];
   int pos;
   
   strcpy(query,"Mary");

   for(pos=0;pos<4;pos++)
      if (strcmp(query,name[pos])==0) break;
   
   printf("Index of %s is %d\n",query, pos);

   system("PAUSE");	
   return 0;
}
