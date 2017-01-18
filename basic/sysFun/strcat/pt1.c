#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
  char str1[10] = "Hi ", str2[10] = "Hello";
  printf("%s\n", strcat(str1, str2));
  
  system("pause");
  return 0;
}