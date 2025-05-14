//1 2 3 4 5 6 7 8 9 10
#include<stdio.h>
void main(void)
{
int a=1;
x: //LABEL x
printf("%d\n",a);
a=a+1;
if(a<=10) goto x;
}

