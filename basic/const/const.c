#include <stdlib.h>
#include <stdio.h>

#define PI 3.14159  /*宣告PI為3.14159*/ 

int main(int argc, char const *argv[])
{

  float radius = 5.0,Area;  /*宣告與設定圓半徑 */    
  Area = radius*radius*PI;  /* 計算圓面積 */     

  printf("圓的半徑為 = %f, 面積為 = %f \n", radius, Area);    

  system("pause");
  return 0;
}