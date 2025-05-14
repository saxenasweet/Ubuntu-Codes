#include<stdio.h>
int i=6; // Global variable -> Scope ->the entire code
void main(void)
{
void print(void);
printf("In main i is %d",i);
i++; //Now i is 7
print(); //Call the function
printf("In main i is %d",i);
}
void print(void)
{
int i=9; // Local variable
i++; // i is 10
printf("In function i is %d\n",i);
}

