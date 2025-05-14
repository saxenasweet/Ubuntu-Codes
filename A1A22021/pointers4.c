#include<stdio.h>
//Pointer Arithmatic
void main(void)
{
int *p;
int a[4]={1,2,3,4};
int l;
/*
p++
p--
p=p/2
p=p*2
Only addition and subtraction is permitted
*/
p=&a[0]; //p is pointing to 1
for(l=0;l<4;l++,p++)
printf("%d ",*p);
printf("\n");
p=p-4; //Rewinding a pointer->Now p points to 1
printf("%d\n",*p);
}

