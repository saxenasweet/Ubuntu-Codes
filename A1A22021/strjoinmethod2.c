#include<string.h>
#include<stdio.h>
void main(void)
{
char st1[20],st2[10];
printf("Enter first string?");
scanf("%s",st1);
printf("Enter second string?");
scanf("%s",st2);
strcat(st1,st2); //String Concatenation -> strcat(dest str,source str)
printf("\nThe new concatenated string is %s\n",st1);
}

