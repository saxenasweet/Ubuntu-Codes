#include<stdio.h>
void main(void)
{
int i=1;
upper:
printf("%d\n",i);
i=i+1;
if(i<=10) goto upper;
}
