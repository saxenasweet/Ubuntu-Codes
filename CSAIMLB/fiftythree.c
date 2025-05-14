#include<stdio.h>
void main(void)
{
int a[10];
int temp;
int loop,loop1;
for(loop=0;loop<10;loop++)
 scanf("%d",&a[loop]);
for(loop=0;loop<10;loop++)
{
for(loop1=loop+1;loop1<10;loop1++)
{
if(a[loop]>a[loop1]) //Swap 
{
 temp=a[loop];
 a[loop]=a[loop1];
 a[loop1]=temp;
}
}
}
//print the sorted array
printf("The sorted array is: ");
for(loop=0;loop<10;loop++)
 printf("%d ",a[loop]);
printf("\n");
}

