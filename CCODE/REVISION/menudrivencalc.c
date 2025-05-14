#include<stdio.h>
void main(void)
{
int a,b,choice;
float result;
scanf("%d %d",&a,&b);
printf("\nEnter your choice 1-ADD, 2- SUBTRACT, 3- DIVIDE, 4- MULTIPLY");
scanf("%d",&choice);
switch(choice)
{
case 1:
result=a+b;
break;
case 2:
result=a-b;
break;
case 3:
result=(float)a/b; //Explicit type casting
break;
case 4:
result=a*b;
break;
default:
printf("\nYou entered invalid choice");
}
if((choice>=1)&&(choice<=4))
 printf("\nResult=%f",result);
}
