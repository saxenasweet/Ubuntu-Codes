#include<stdio.h>
void main(void)
{
int a[100],d=0,n,l;//Array is a collection of elements of the same data type
float avg;
//float x[20]; //Array of 20 floating point numbers -x[0]->first number
scanf("%d",&n);
//a[0]->first number
//a[1]->second number
//
//a[99]->last number
for(l=0;l<n;l=l+1)
{
 scanf("%d",&a[l]);
 d=d+a[l];
}
avg=(d*1.0)/n;
printf("Sum=%d Average is %f\n",d,avg);
printf("Numbers in reverse order are:-");
for(l=n-1;l>=0;l=l-1) //n-1 is the index of the last number
 printf("%d\t",a[l]); //Escape Sequence :\n \t
}

