#include<stdio.h>
void main(void)
{
int n; //n is a 5 digit input
int d1,d2,d3,d4,d5;
printf("Enter a 5 digit number?");
scanf("%d",&n);
d1=n%10;
n=n/10; //Reducing the number by one digit
d2=n%10;
n=n/10;
d3=n%10;
n=n/10;
d4=n%10;
n=n/10;
d5=n%10;
printf("%d\n%d\n%d\n%d\n%d\n",d5,d4,d3,d2,d1);
}
