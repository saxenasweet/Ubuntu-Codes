/*
for(initialization;condition;operation)
{
body of the loop
}
*/
#include<stdio.h>
void main(void)
{
int i=0;
for(;;)
{
i=i+1;
if(i==5)
 continue;
printf("%d\n",i);
if(i==10)
 break;
}
}


