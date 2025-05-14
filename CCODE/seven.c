#include<stdio.h>
void main(void)
{
int x=1,y=2,z;
z=x/y * --x * y++;
printf("%d\n",x);
}
