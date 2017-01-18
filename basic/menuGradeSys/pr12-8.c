#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "myLib.h"

struct stuData{
   char  idNo[10];
   int   eng,math;
   float avg;
};

int  cnt=0;
FILE *inf;
struct stuData s[10];

void loadFile()
{  int i;
   char fileName[20];
   system("cls");
   skipxy(9,5);  printf("Input file name: ");
   scanf("%s",fileName);
   inf=fopen(fileName,"r");
   if (inf==NULL){
      skipxy(9,1);
      printf("Failed to open %s!",fileName);
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
   skipxy(9,1);
   printf("loadFile is done. Press any key!");
   getche();
}

void prtArray()
{  int i;
   system("cls");
   for(i=0;i<cnt;i++){
      printf("%5s %4d ",s[i].idNo,s[i].eng);
      printf("%4d %5.1f\n",s[i].math,s[i].avg);
   }
   printf("\nprtArray is done. Press any key!");
   getche();
}


void sortAvg()
{  int i,j;
   struct stuData temp;
   system("cls");
   for(j=0;j<cnt-1;j++)
      for(i=0;i<cnt-1;i++)
	 if (s[i].avg<s[i+1].avg){
	    temp=s[i];
	    s[i]=s[i+1];
	    s[i+1]=temp;
	 }
   skipxy(9,5);  printf("sortArray is done. Press any key!");
   getche();
}

int main(int argc, char *argv[])
{  int  c;

   while(1){
      system("cls");
      skipxy(9,5);  printf("1. Load file");
      skipxy(9,2);  printf("2. Sort array");
      skipxy(9,2); printf("3. List array");
      skipxy(9,2); printf("0. Good bye");
      skipxy(9,2); printf("Select 0-3: ");

      c=getche();
      switch (c){
	 case '1': loadFile(); break;
	 case '2': sortAvg();  break;
	 case '3': prtArray(); break;
	 case '0': exit(0);
      }
   }
}
