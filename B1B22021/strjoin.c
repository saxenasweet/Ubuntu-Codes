#include<stdio.h>
#include<string.h>
void main(void)
{
char st1[10],st2[5],st3[10];
gets(st1);
gets(st2);
strcat(st1,st2);
puts(st1);
puts(st2);
strcpy(st3,st1);
puts(st3);
printf("There are %d characters in %s\n",strlen(st3),st3);
}

