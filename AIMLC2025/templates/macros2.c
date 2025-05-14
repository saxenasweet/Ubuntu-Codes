#include<stdio.h>
#define GREATEST(a,b) a>b?a:b
int main(void)
{
int a,b;
scanf("%d %d",&a,&b);
/*
if(a>b)
 printf("%d is greatest\n",a);
else
 printf("%d is greatest\n",b);
*/
printf("Greatest is %d\n",GREATEST(a,b));
}

