#include<stdio.h> //Nested Macros
#define INTEGER int
#define SQUARE(X) X*X
#define CUBE(X) SQUARE(x)*x
int main(void)
{
INTEGER x;
scanf("%d",&x);
printf("%d\n%d\n",SQUARE(x),CUBE(x));
}

