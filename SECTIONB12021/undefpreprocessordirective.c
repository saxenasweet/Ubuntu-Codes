#include<stdio.h>
#define PI 3.14
#undef PI
void main(void)
{
printf("%f\n",PI);
}
//Code will not compile becuase we have undefined PI and used it in main()
