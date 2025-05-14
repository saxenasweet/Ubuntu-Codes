#include<stdio.h>
void main(void)
{
enum year_month{Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
int l;
for(l=Jan;l<=Dec;l++)
printf("%f\n",l);
}
