#include<stdio.h>
void main(void)
{
float t;
int *y;
t=22.0/7;
y=&t;//integer pointer cannot point to a float value 
printf("%d\n",*y);
}

