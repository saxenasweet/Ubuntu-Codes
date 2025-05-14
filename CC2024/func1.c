#include<stdio.h>
void main(void)
{
int sum(int x,int y); //Function declaration
int a,b;
scanf("%d %d",&a,&b);
printf("Sum of %d and %d is %d\n",a,b,sum(a,b)); //Calling function
}
int sum(int x,int y) //Function Definition
{
return x+y;
}

