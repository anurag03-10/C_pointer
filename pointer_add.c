#include<stdio.h>
void main()
{
 int a,b,sum,*ptr;
 int *ptr1=&a;
 int *ptr2=&b;
 printf("Enter the value for Variable1");
 scanf("%d",&a);
 printf("Enter the value for Variable2");
 scanf("%d",&b);
 *ptr=*ptr1+*ptr2;
 printf("%d ", *ptr);
}
