#include <stdio.h>
#include <stdlib.h>

struct stuData{
   char  idNo[10];
   int   eng,math;
   float avg;
};

int cnt = 0;
// int idx[5] = {4,1,3,2,0};
int idx[5] = {0,1,2,3,4};

struct stuData s[5] = {
  {"2010A01",70,80,75.5},
  {"2010A02",95,90,92.5},
  {"2010A03",80,86,83.0},
  {"2010A04",86,90,88.0},
  {"2010A05",95,96,95.5}
};

int main(int argc, char *argv[])
{
   int i;
   int temp;

   for (i = 0; i < 5; ++i) {
     if(s[idx[i]].avg < s[idx[i+1]].avg){
      temp = idx[i];
      idx[i] = idx[i+1];
      idx[i+1] = temp;
     }
   }

   for(i = 0; i < 5; i++) {
      printf("%5s %4d ", s[idx[i]].idNo, s[idx[i]].eng);
      printf("%4d %5.1f\n", s[idx[i]].math, s[idx[i]].avg);
   }

   system("PAUSE");	
   return 0;
}
