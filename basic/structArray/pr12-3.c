#include <stdio.h>
#include <stdlib.h>

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

   inf=fopen("class1.in","r");
   i=0;
   while( (fscanf(inf,"%s",s[i].idNo)) != EOF){
      fscanf(inf,"%d%d",&s[i].eng,&s[i].math);
      s[i].avg=(float)(s[i].eng+s[i].math)/2;
      i++;
   }
   cnt=i;
}

void prtArray()
{  int i;

   for(i=0;i<cnt;i++){
      printf("%5s %4d ",s[i].idNo,s[i].eng);
      printf("%4d %5.1f\n",s[i].math,s[i].avg);
   }
}

int main(int argc, char *argv[])
{  int  i;
   system("cls");
   loadFile();
   printf("There are %d students:\n",cnt);
   prtArray();

   system("PAUSE");	
   return 0;
}
