#include<stdio.h>
void main(void)
{
int n,s=0,r;
scanf("%d",&n);
while(n>0)
{
r=n%10;
s=s+r;
n=n/10;

}
printf("\nSum of digits are %d\n",s);
}
