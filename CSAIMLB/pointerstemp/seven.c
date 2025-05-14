#include<stdio.h>
void main(void)
{
static int a[10];
int loop;
for(loop=0;loop<10;loop++)
 printf("%d\n",a[loop]);
}

