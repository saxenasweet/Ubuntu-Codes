#include<stdio.h>
#define NUMBER 4
void main(void)
{
#if ( NUMBER == 1)
printf("1\n");
#elif (NUMBER == 2)
printf("2\n");
#elif (NUMBER == 3)
printf("3\n");
#else
printf("Some other number\n");
#endif
}
//Some other number
