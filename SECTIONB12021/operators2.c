#include<stdio.h>
void main(void)
{
int a=3,b=6,c;
//= is called the assignment operator
c=a; //c=3
//c=c+a; //c=3+3 =6
c+=a;
printf("%d\n",c);
c=b;//c=6
//c=c-b;//c=6-6
c-=b;
printf("%d\n",c);
}

