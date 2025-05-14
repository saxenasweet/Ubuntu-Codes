#include<stdio.h>
void main(void)
{
int number,n,r;
scanf("%d",&number);
n=number;
while(n>0)
{
r=n%10;
n=n/10;
printf("%d",r);

}
printf("\n");
printf("%d",number);
}
