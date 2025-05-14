#include<stdio.h>
void main(void)
{
int num,f=1,c=0;
scanf("%d",&num);
while(f<=num)
{
if((num%f)==0)
 c++;
f++;
}
printf("Total Factors are %d\n",c);
if(c==2)
 printf("Number is Prime\n");
else if(num==1)
 printf("Number is neither nor composite\n");
else
 printf("Number is Composite\n");
}

