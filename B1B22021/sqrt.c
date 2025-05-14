#include<math.h>
#include<stdio.h>
void main(void)
{
float num,result;
printf("Enter a number?");
scanf("%f",&num);
if(num>=0)
{
result=sqrt(num);
printf("Answer is %f\n",result);
}
else
printf("Invalid input\n");
}


