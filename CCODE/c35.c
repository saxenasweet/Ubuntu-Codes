#include<stdio.h>
#include<string.h>
void main(void)
{
char tt[20]="0123456789";
strcpy(tt,tt+2);
printf("%d\n",strlen(tt)-tt[9]+'5');
}
