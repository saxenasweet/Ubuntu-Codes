#include<stdio.h>
void main(void)
{
int a,c;
long int b=1;
long long int d=1;
printf("Size of int is %d and long int is %d and long long int is %d\n",sizeof(a),sizeof(b),sizeof(d));
for(a=1;a<=20;a++) //Controls factorial of a number
{
for(c=1;c<=a;c++) //calculates factorial of that number 
{
b=b*c;
}
printf("Factorial of %d is %ld \n",a,b);
b=1;
}
}
