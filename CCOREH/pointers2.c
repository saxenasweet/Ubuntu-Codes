#include<stdio.h>
void main(void)
{
int a[5]={12,54,23};
int *p;
p=&a[0]; //p points to 12
printf("%d\n",*p);
p++; //move p to point to the next number i.e. 54
printf("%d\n",*p); //prints 54
p++; //Pointer Arithmatic  ->Forwarding the pointer
printf("%d\n",*p); //Prints 23
p++;
printf("%d\n",*p); //Prints 0
p++;
printf("%d\n",*p); //Prints 0
p--;
printf("%d\n",*p);//Prints 0
p--;
printf("%d\n",*p);//Print 23
p-=2;
printf("%d\n",*p); //Print 12

}

