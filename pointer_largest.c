#include<stdio.h>
void main()
{
 int g,a=0, b[10],p=-32765,s=32766;
 printf("Enter the total number");
 scanf("%d",&g);
 int *ptr=&b;
 printf("Enter %d numbers  ",g);
 
 for(;a<g;a++)
 {
  scanf("%d",&b[a]);
  if(*(ptr+a)>=p)
  p=*(ptr+a);
  if(*(ptr+a)<=s)
  s=*(ptr+a);

 }
  printf("\n largest no. among all elements in the array is %d ",p);
  printf("\n smallest no. among all elements in the array is %d ",s); 
}
