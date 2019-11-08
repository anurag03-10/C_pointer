#include<stdio.h>
 void swap(int *x,int *y,int *z);
 void main()
 {
  int x=10, y=20,z=30;
  swap(&x,&y,&z);
  printf("The values after swapping are %d  %d  %d",x,y,z);
 }
 
 void swap(int *a,int *b,int *c)
 {
  int t=0;
  t=*a;
  *a=*b;
  *b=*c;
  *c=t;
 }
