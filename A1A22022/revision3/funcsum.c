#include<stdio.h>
void main(void)
{
int a,b,c;
int sum(int x,int y); //Function Declaration
scanf("%d %d",&a,&b);
c=sum(a,b);
printf("%d",c);
}
int sum(int x,int y) //Function Definition
{
return x+y;
}
