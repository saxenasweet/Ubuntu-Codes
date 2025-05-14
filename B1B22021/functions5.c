#include<stdio.h>
void main(void)
{
int fact(int n);
int i;
scanf("%d",&i);
printf("The factorial of %d is %d\n",i,fact(i));
}
int fact(int n)
{
register int result=1; //register is a storage class specifier 
int loop; //if space is available data is directly fetched from the registers
for(loop=1;loop<=n;loop++) //thus the program runs faster
 result=result*loop;
return result;
}

