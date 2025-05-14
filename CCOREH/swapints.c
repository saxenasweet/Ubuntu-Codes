#include<stdio.h>
void main(void)
{
int a,b,temp;
scanf("%d %d",&a,&b);
int *p,*q;
/*
temp=a;
a=b;
b=temp;
*/
/*
a=a+b; //a=6 b=7 a=13
b=a-b; //b=13-7=6
a=a-b; //13-6=7
printf("%d %d\n",a,b);
*/
p=&a;
q=&b;
temp=(*p);
(*p)=(*q);
(*q)=temp;
printf("%d %d\n",a,b);
}

