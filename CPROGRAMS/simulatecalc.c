#include<stdio.h>
void main(void)
{
float a,b,result;
int choice;
scanf("%f %f",&a,&b);
printf("\nEnter your choice 1-Add,2-Subtract, 3- Multiply and 4- Divide?");
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
 result=a*b;
 break;
case 4:
 result=a/b;
default:
 printf("\nInvalid choice\n");
}
if((choice>=1)&&(choice<=4))
printf("\nResult is %f\n",result);
}

