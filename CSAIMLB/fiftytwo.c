#include<stdio.h>
void main(void)
{
int a[10];
int loop,sum=0;
float avg;
for(loop=0;loop<10;loop++)
{
scanf("%d",&a[loop]);
sum+=a[loop];
}
avg=(float)sum/10;
printf("Sum and Average are %d and %f\n",sum,avg);
}

