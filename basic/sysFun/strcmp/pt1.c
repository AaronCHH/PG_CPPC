#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
  char str1[10] = "Hi", str2[10] = "He", str3[10] = "Hi";
  
  if (strcmp(str1, str2)>0) printf("why?\n");
  if (strcmp(str1, str3)==0) printf("why not?\n");
  
  system("pause");
  return 0;
}