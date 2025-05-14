#include<stdio.h>
void main(void)
{
int a,b,c;
int sum(int x,int y); //Function Declaration
scanf("%d %d",&a,&b);
printf("%d\n",sum(a,b));
}
int sum(int x,int y) //Function Definition
{
return x+y;
}
//You can declare a function many times
//But you define a function only once

