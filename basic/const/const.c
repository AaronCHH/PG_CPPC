﻿#include <stdlib.h>
#include <stdio.h>

#define PI 3.14159  /*�ŧiPI��3.14159*/ 

int main(int argc, char const *argv[])
{

  float radius = 5.0,Area;  /*�ŧi�P�]�w��b�| */    
  Area = radius*radius*PI;  /* �p��ꭱ�n */     

  printf("�ꪺ�b�|�� = %f, ���n�� = %f \n", radius, Area);    

  system("pause");
  return 0;
}