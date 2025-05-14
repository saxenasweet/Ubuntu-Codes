#include<stdio.h>
int a,b; //Global variables
void main(void)
{
void swap(void); //Function Declaration
scanf("%d %d",&a,&b);
swap();
printf("%d %d\n",a,b);
}
void swap(void) //Function Definition
{
int temp;
temp=a;
a=b;
b=temp;
printf("In function the numbers are %d and %d\n",a,b);
}

