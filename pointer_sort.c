#include<stdio.h>
void main()
{
 int k,a[10],j, b=0,i=0;
 int *p=&a;
 printf("Enter numbers  ");
 for(;b<10;b++)
 {
  scanf("%d",&a[b]);
 } 
 printf("Number in ascending order are  \n");
 for(;i<10;i++)
 {
  for(j=i+1;j<10;j++)
  {
   if(*(p+j)<*(p+i))
   {
    k=*(p+i);
    *(p+i)=*(p+j);
    *(p+j)=k;
   }
  }
  }
  for(b=0;b<10;b++)
 {
  printf("%d ",*(p+b));
 }
} 

