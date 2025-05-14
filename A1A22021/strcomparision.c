//Write  a code to enter two strings and check if they are same
//Input
//Amit
//amit
//Output
//Strings are not same
#include<string.h>
#include<stdio.h>
void main(void)
{
char st1[20],st2[20];
int n;
printf("Enter the first string?");
scanf("%s",st1);
printf("Enter the second string?");
scanf("%s",st2);
n=strcmp(st1,st2);
printf("%d\n",n);
if(n==0)
 printf("Strings are same..\n");
else
 printf("Strings are not same...\n");
}
