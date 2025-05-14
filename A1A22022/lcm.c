#include<stdio.h>
void main(void)
{
int n1,n2,r1,r2,lcm=1,flag=0;
printf("Enter numbers  whose LCM you want me to find?");
scanf("%d %d",&n1,&n2);
while(flag!=1)
{
r1=lcm%n1;
r2=lcm%n2;
if((r1==0)&&(r2==0))
 flag=1;
else
 lcm=lcm+1;
}
printf("\nLCM is %d\n",lcm);
}


