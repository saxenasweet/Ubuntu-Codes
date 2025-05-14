#include<stdio.h>
void main(void)
{
int a[100],n,lcm,loop,flag=1;
scanf("%d",&n); //n is the number of numbers whose LCM is to found
for(loop=0;loop<n;loop++)
 scanf("%d",&a[loop]);
lcm=a[0];
while(1)
{
for(loop=0;loop<n;loop++)
 if(lcm%a[loop]!=0)
   flag=0;
if(flag==1)
 break;
lcm++;
flag=1;
}
printf("The LCM of %d\n",lcm);
}

