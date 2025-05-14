#include<stdio.h>
#define PI 3.14
#undef PI //undefining PI 
void main(void)
{
int a=2;
#ifdef PI
printf("%d\n",a);
#else
scanf("%d",&a);
printf("%d\n",a);
#endif
}
