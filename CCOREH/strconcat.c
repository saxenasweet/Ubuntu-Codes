#include<string.h>
#include<stdio.h>
void main(void)
{
char st1[30],st2[30],st3[60];
gets(st1);
gets(st2);
strcpy(st3,st1);
puts(st3);
strcat(st3,st2);
puts(st3);
//STRING CONCATENATE=> STRING COPY and THEN CONCATENATE
}

