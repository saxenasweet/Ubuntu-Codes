#include<stdio.h>
void main(void)
{
int i=1;
for(;;)
{
printf("%d",i);
i=i+1;
if(i=11) //= Assignment whereas == is used to check for equality
 break;
}
}

