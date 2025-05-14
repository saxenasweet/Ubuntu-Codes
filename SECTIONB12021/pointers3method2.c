#include<stdio.h>
void main(void)
{
void swap(int *x,int *y);
int a=2;
int b=3;
printf("a=%d and b=%d before swap\n",a,b);
swap(&a,&b); //Call by reference , passing the address of a and b
printf("a=%d and b=%d after swap\n",a,b);
}
void swap(int *x,int *y) //pointers receive the address x points to a and y points to b
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}

