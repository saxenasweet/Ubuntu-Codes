#include<stdio.h>
void main(void)
{
int smallest,largest;
int a[10];
int loop;
scanf("%d",&a[0]);
smallest=a[0];
largest=a[0];
for(loop=1;loop<10;loop++)
{
scanf("%d",&a[loop]);
if(a[loop]<smallest)
  smallest=a[loop];
if(largest<a[loop])
 largest=a[loop];
}
printf("Smallest=%d and Largest=%d\n",smallest,largest);
}

