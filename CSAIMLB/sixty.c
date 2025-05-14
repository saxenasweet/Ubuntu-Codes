#include<stdio.h>
void main(void)
{
int a[5]={1,2,3,4,5};
int *p;
p=&a[0];// p points to address where 1 is stored
p++; //forwarding a pointer
printf("%d\n",*p); //2 is printed
p=p+2;
printf("%d\n",*p); //4 is printed
p=p+2;
printf("%d\n",*p); //Garbage value is printed
p=p-2;//rewinding a pointer
printf("%d\n",*p);
//Illegal p=p/2;
//Illegal p=p*2;
}

