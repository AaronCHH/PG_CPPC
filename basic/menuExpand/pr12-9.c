#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "myLib.h"

struct stuData{
   char  idNo[10];
   int   eng,math;
   float avg;
};

int  cnt;
FILE *inf;
struct stuData s[5];

void loadClass1()
{  int i;

   system("cls");
   skipxy(9,5);
   printf("Program is loading file class1.in!");
   inf=fopen("class1.in","r");
   if (inf==NULL){
      skipxy(9,2);
      printf("Failed to open file %class1.in!");
      getche();
      return;
   }
   i=0;
   while( (fscanf(inf,"%s",s[i].idNo)) != EOF){
      fscanf(inf,"%d%d",&s[i].eng,&s[i].math);
      s[i].avg=(float)(s[i].eng+s[i].math)/2;
      i++;
   }
   cnt=i;
   skipxy(9,2);
   printf("loadFile is done. Press any key!");
   getche();
}

void searchData()
{  char query[10];
   int  pos;

   system("cls");
   skipxy(9,5); printf("Input idNo: ");
   scanf("%s",query);
   for(pos=0;pos<cnt;pos++)
       if( strcmp(query,s[pos].idNo)==0 ) break;
   if (pos<cnt){
       skipxy(9,1);  printf("English is %3d",s[pos].eng);
       skipxy(9,2);  printf("Math    is %3d",s[pos].math);
       skipxy(9,2);  printf("Average is %5.1f",s[pos].avg);
   }
   else{
       skipxy(9,1);   printf("Not found");
   }
   skipxy(9,2);   printf("Press any key!");
   getche();
}

int main(int argc, char *argv[])
{  int i;
   
   loadClass1();
   searchData();
}

