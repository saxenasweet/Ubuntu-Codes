#include<stdio.h>
void main(void)
{
int a[5]={1,2,3,4};
int *p;
int loop;
p=&a[0];
for(loop=0;loop<4;loop++,p++)
 printf("%d\n",*p);
p++;
printf("%d\n",*p); //Why is 32767 being printed ???

//Ans: This number indicates the end of the array
}
