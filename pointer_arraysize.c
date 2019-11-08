#include<stdio.h>
void main()
{
 int a[10],sum=0,x;
 int *ptr;
 ptr=a;
 for(x=0;x<10;x++)
 scanf("%d",(ptr+x));
 printf("Sum of numbers in the array are \n");
 for(x=0;x<10;x++)
 sum=sum+*(ptr+x);
 printf("%d",sum);
}
