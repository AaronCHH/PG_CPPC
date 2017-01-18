#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{  short i,ar[10]={0,10,20,30,40,50,60,70,80,90};
   FILE *fp;
   
   fp=fopen("short10.bin","wb");
   for(i=0;i<10;i++) fwrite(&ar[i],sizeof(short),1,fp);
   fclose(fp);

   fp=fopen("short10.bin","rb");
   fseek(fp,-2,2);
   fread(&i,sizeof(short),1,fp);
   printf("%d\n",i);

   fseek(fp,-4,1);
   fread(&i,sizeof(short),1,fp);
   printf("%d\n",i);

   fseek(fp,-4,1);
   fread(&i,sizeof(short),1,fp);
   printf("%d\n",i);
   fclose(fp);

   system("PAUSE");	
   return 0;
}
