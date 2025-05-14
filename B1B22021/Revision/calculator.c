#include<stdio.h>
void main(void)
{
int a,b,result,choice;
printf("Enter 2 numbers?");
scanf("%d %d",&a,&b);
printf("Enter our choice 1-Add,2-Subtract,3-Multiply and 4-Divide?");
scanf("%d",&choice);
if((choice>=1)&&(choice<=4))
{
if(choice==1)
 result=a+b;
else if (choice==2)
  result=a-b;
else if (choice==3)
   result=a*b;
else
  result=a/b;
printf("Result is %d\n",result);
}
else
 printf("Invalid Choice");
}

