#include<stdio.h>
int main(void)
{
int a,b,c;
scanf("%d %d",&a,&b);
if(b!=0)
{
c=a/b;
printf("%d\n",c);
}
else
 printf("Division by Zero is not allowed\n");
return 0;
}

