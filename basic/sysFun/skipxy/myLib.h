void copyStr(char *ptr1,char *ptr2)
{  while(1){
      *ptr2=*ptr1;
      if (*ptr1==0) break;
      ptr1++; ptr2++;
   }
}

void skipxy(int x,int y)
{  int i;
   for(i=0;i<y;i++)printf("\n");
   for(i=0;i<x;i++)printf(" ");
}