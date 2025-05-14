#include<stdio.h>
int area(int x,int y);
void main(void)
{
//int area(int x,int y); //Function Declaration
int a,b,result;
scanf("%d %d",&a,&b);
result=area(a,b);
printf("Area=%d\n",result);
}
int area(int x,int y) //Function Definition
{
return x*y;
}
