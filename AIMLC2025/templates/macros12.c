#include<stdio.h>
#define GREATEST(a,b) a>b?a:b //Macro as a function
int main(void)
{
int a,b;
scanf("%d %d",&a,&b);
printf("The greatest number is:%d\n",GREATEST(a,b));
return 0;
}
