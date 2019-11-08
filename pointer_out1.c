#include<stdio.h>
void main()
{
 int a;
 int *ptr=&a;
 a=5;
 printf("%d ", &a);
 printf("%d ", a);
 printf("%d ", ptr);
 printf("%d ", *ptr);
 printf("%d ", &ptr);
 printf("%d ", *(&ptr));
}
