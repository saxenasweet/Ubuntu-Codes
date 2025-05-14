#include<stdio.h>
void main(void)
{
int a[10],n,loop,flag=0;
for(loop=0;loop<10;loop=loop+1)
{
printf("Enter a[%d]?",loop);
scanf("%d",&a[loop]);
}
printf("Enter what number you want me to search?");
scanf("%d",&n);
for(loop=0;loop<10;loop=loop+1)
{
if(a[loop]==n)
{
 printf("Number found at location %d\n",loop);
 flag=1;
}
}
if(flag==0)
 printf("Number not in the list\n");
}

