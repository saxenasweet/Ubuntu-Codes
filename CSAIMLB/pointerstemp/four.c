#include<stdio.h>
void main(void)
{
char p[5]={'h','e','l','l','o'};
int loop;
for(loop=0;loop<5;loop++)
 printf("%c->%x\n",p[loop],&p[loop]);
//In an Array, elements are stored in memory in a contiguous manner
}

