#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{  int i;
   FILE *inf;
   char name[20];
   
   inf = fopen("in.txt","r");
   
   if(inf==NULL){
     printf("Failed to open in.txt");   
     system("pause");
     exit(0);
   }
   while( (fscanf(inf,"%s",name)) != EOF)
      printf("%s\n",name);
   fclose(inf);

   system("PAUSE");	
   return 0;
}
