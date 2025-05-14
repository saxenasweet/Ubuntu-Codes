#include<stdio.h>
void main(void)
{
int n;
int t,nt=0;
int d;
printf("Enter a number?");
scanf("%d",&n);
t=n;
while(t>0)
{
nt=(nt*10)+(t%10);
t=t/10;
}
while(nt>0)
{
printf("%d\n",nt%10);
nt=nt/10;
}

}
