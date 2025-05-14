#include<stdio.h>
void main(void)
{
int a[100],n,loop,flag=1,lcm;
scanf("%d",&n);
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
flag=1;
lcm++;
}
printf("LCM of is %d\n",lcm);
}

