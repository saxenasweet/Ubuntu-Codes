/*
switch(variable_name)
{
case value1:
.
.
break;
case value 2:
.
.
break;
default:
.
.
}
*/
#include<stdlib.h>
#include<stdio.h>
void main(void)
{
float n1,n2,result;
int ch;
printf("Enter two numbers?");
scanf("%f %f",&n1,&n2);
printf("Enter your choice (1-Add,2-Subtract,3-Multiply & 4- Divide)?");
scanf("%d",&ch);
if ((ch==4)&&(n2==0))
{
 printf("Denominator cant be ZERO.Exiting...");
 exit(0);
}
switch(ch)
{
case 1:
result=n1+n2;
break;
case 2:
result=n1-n2;
break;
case 3:
result=n1*n2;
break;
case 4:
result=n1/n2;
break;
default:
printf("You entered invalid choice..Exiting!");
exit(0);
}
printf("Result is %f\n",result);
}
