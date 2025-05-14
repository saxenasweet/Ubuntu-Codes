#include<stdio.h>
void main(void)
{
int a,b;
scanf("%d %d",&a,&b);
if(a>b)
printf("%d is greatest",a);
else if(b>a)
printf("%d is greatest",b);
else
printf("Both numbers are same");
}

