/*
switch(<variable_name)
{
case value_1:
list of statements;
break;
case value_2:
list of statements;
break;
...
...
...
default:
list of statements;
}
#include<stdio.h>
#include<stdlib.h>
void main(void)
{
float a,b,result;
int choice;
printf("Enter two numbers?");
scanf("%f %f",&a,&b);
printf("Enter your choice (1-Add,2-Subtract,3-Multiply,4-Divide?");
scanf("%d",&choice);
if((b==0)&&(choice==4))
{
 printf("Division by Zero is Illegal\n");
 exit(0);
}
switch(choice)
{
case 1:
result=a+b;
break;
case 2:
result=a-b;
break;
case 3:
result=a*b;
break;
case 4:
result=a/b;
break;
default:
printf("Invalid menu option\n");
}
printf("Result = %f\n",result);
}

