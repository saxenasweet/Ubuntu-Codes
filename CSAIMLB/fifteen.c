

#include<stdio.h>
void main(void)
{
int i=1;
while(i<=50)
{
if(((i%3)!=0)&&((i%5)!=0))
 printf("%d\n",i);
else
{
i++; 
continue;
i++;
}
}
printf("\n");
}

