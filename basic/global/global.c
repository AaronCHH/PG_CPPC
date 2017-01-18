#include <stdlib.h>
#include <stdio.h>

int salary = 17500;/* 宣告salary為全域變數 */ 

int main(int argc, char const *argv[])
{
  printf("salary = %d\n", salary);
  {
    int salary = 22000;/* 在此宣告salary為區塊變數 */ 
    printf("salary = %d\n", salary);
  }
  printf("salary = %d\n", salary);

  system("pause");
  return 0;
}