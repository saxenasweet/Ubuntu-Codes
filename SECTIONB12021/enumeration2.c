#include<stdio.h>
void main(void)
{
enum year {Jan=3,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
int i;
for(i=Jan;i<=Dec;i++)
 printf("%d\n",i);
}

