#include<stdio.h>
void main(void)
{
int a;
void s(void);
s();
s();
}
void s (void)
{
static int s=0;
printf("%d\n",s);
s++;
}

