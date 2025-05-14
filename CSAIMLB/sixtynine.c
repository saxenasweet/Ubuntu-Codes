#include<stdio.h>
#define PRINT(s) #s
void main(void)
{
printf(PRINT(HELLO));
}

