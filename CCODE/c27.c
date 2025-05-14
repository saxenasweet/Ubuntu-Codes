#include<stdio.h>
int fun(int *t)
{
return *(++t);
}
void main(void)
{
int arr[]={8,4,2,1,};
printf("%d\n",fun(arr+2));
}

