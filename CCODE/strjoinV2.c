#include<string.h>
#include<stdio.h>
void main(void)
{
char st1[20],st2[10];
scanf("%s",st1);
scanf("%s",st2);
strcat(st1,st2); //st1=st1+st2
printf("st1 is %s and st2 is %s\n",st1,st2);
}
