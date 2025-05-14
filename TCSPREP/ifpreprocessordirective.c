#include<stdio.h>
#define FLAG 1
void main(void)
{
#if (FLAG==0)
printf("FLAG is ZERO");
#endif
#if (FLAG==1)
printf("FLAG is ONE");
#endif
}
