#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  short  i;
  FILE *inf;
   
  inf = fopen("binary.dat", "rb");
  fread(&i, sizeof(i), 1, inf);
  fclose(inf);
  printf("Value of i is %d.\n",i);

  system("PAUSE");	
  return 0;
}
