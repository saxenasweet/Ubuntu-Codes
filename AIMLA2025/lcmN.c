#include<stdio.h>
void main(void)
{
int a[100],flag=1,loop,lcm,n;
scanf("Enter how many number?");
scanf("%d",&n);
for(loop=0;loop<n;loop++)
 scanf("%d",&a[loop]);
printf("Numbers have been entered..\n");
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
printf("The LCM is %d\n",lcm);
}

