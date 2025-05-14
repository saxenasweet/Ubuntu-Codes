#include<stdio.h>
void main(void)
{
int i;
float j=22.0/7;
int *p; //Pointer of the type integer
int *q;
//Invalid q=&j; 
scanf("%d",&i); //&i is the memory address
printf("%x\n",&i);
p=&i;  //Pointer is a variable which stores the address of 
//other variables of the same data type
printf("%d\n",*p); //*p means the value that p points to

}

