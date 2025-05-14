#include<stdio.h>
void main(void)
{
int num,r;
int loop;
scanf("%d",&num);
printf("Factors of %d are :\n",num);
for(loop=1;loop<=num;loop++)
{
r=num%loop;
if(r==0)
 printf("%d\n",loop);
}
}

