/*
Functions are sub programs used to solve a problem.
Every function has a name , values it accepts as input(also called
arguments or parameters) and may return a value (output).
Functions are of two types :
a. Library Functions e.g. printf(), scanf(),etc
b. User Defined Functions ->defined by a programmer
*/
#include<stdio.h>
void main(void)
{
int addition(int x,int y); //Function declaration
int a,b;
int c;
scanf("%d %d",&a,&b);
c=addition(a,b); //Call by value
printf("%d\n",c);
}
int addition(int x,int y)
{
int z;
z=x+y;
return z;
}


