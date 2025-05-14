#include<stdio.h> //#include->PRE PROCESSOR DIRECTIVE
#define PI 22/7.0 //To define a constant
#define SQUARE(x) x*x //Function
#define CUBE(x) SQUARE(x)*x
void main(void)
{
int a,b,c;
char a[3]="hello"; //Logical error
scanf("%d %d",&a,&b);
c=a/b; //Has a logical error if the value of b is 0
printf("Result of division is %d\n",c);
printf("%f\n",PI);
printf("%d %d\n",SQUARE(3),CUBE(4));
}

