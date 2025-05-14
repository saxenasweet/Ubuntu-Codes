#include<stdio.h>
void main(void)
{
int n;
int largest;
int number;
scanf("%d",&n);
scanf("%d",&largest);
n--; //n=n-1
while(n>0)
{
scanf("%d",&number);
if(number>largest)
 largest=number;
n--;
}
printf("The largest number is %d\n",largest);
}

