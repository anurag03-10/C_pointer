#include<stdio.h>
void main()
{
 int x=1, y=8, z[10];
 int *ip;
 ip=&x;
 y=*ip;
 printf("%d 	%d", y,x);
 *ip=0;
 printf("\n%d 	%d", y,x);
}
