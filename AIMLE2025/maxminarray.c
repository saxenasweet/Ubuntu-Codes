#include<stdio.h>
void main(void)
{
int a[100],n,max,min,loop;
printf("Enter how many numbers in the array?");
scanf("%d",&n); //Numbers
printf("Enter the numbers one by one.\n");
scanf("%d",&a[0]); //First number
max=a[0];
min=a[0];
for(loop=1;loop<n;loop++)
{
scanf("%d",&a[loop]);
if(max<a[loop])
max=a[loop];
if(min>a[loop])
min=a[loop];
}
printf("Max and Min are %d and %d\n",max,min);
}

