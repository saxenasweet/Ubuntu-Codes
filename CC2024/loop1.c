#include<stdio.h>
void main(void)
{
int i=10;
TOP:
printf("%d\n",i);
i=i-1;
if (i>=0)
  goto TOP;
}

