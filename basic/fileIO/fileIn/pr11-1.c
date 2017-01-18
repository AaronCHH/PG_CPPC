#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  FILE *inf;
  char name[20];   
  inf = fopen("in.txt","r");   

  for(i=0; i<6; i++){
    fscanf(inf,"%s",name);
    printf("%s\n",name);
  }

  fclose(inf);
  system("PAUSE");	
  return 0;
}
