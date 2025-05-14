#include<stdio.h>
void main(void)
{
int sumofn(int n);
int no;
scanf("%d",&no);
printf("%d\n",sumofn(no));
}
int sumofn(int n)
{
if(n>0)
 return n+sumofn(n-1);
else
 return 0;
}
//Recursive Definition:
//For n>0 sumofn(n)=n+sumof(n-1)
//For n=0 sumofn(0)=0
