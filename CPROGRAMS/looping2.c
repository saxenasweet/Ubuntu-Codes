#include<stdio.h>
void main(void)
{
int i=1;
x: //Label
printf("\n%d",i);
i=i+1;
if(i<=10)
 goto x;
}
