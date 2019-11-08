#include<stdio.h>

 void swap(char *x, char *y);
 void main()
 {
  int i;
  char a[11],x,y;
  gets(a);
  for(i=0;a[i]!='\0';i=i+2)
  {
   swap(&a[i],&a[i+1]);
  }
 }
 
 void swap(char *a,char *b)
 {
  char t;
  t=*a;
  *a=*b;
  *b=t;
  printf("%c  %c  ",*a,*b);
 }
 
