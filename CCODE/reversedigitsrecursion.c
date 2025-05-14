#include<stdio.h>
void main(void)
{
int reverse(int x);
int g;
scanf("%d",&g);
printf("%d\n",reverse(g));
}
int reverse(int x)
{
int d;
if(x>0)
 {
  printf("%d",x%10);
  d=reverse(x/10);
 }
else 
 return 0;
}

