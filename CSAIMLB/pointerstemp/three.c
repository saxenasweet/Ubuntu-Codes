#include<stdio.h>
void main(void)
{
int p[5]={1,2,3,4,5};
int loop;
for(loop=0;loop<5;loop++)
 printf("%d->%x\n",p[loop],&p[loop]);
//In an Array, elements are stored in memory in a contiguous manner
}

