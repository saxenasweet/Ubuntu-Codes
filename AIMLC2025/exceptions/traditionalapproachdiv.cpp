#include<stdio.h>
#include<iostream>
using namespace std;
int main(void)
{
int a,b,c;
scanf("%d %d",&a,&b);
if(b==0)
 printf("Invalid input\n");
else
{
c=a/b;
printf("%d\n",c);
}
return 0;
}

