#include<stdio.h>
void main(void)
{
char c[40];//String is an array of characters
int length,ca=0;
printf("Enter your name?");
scanf("%[^\n]s",c);
printf("You entered %s\n",c);
for(length=0;c[length]!='\x0';length=length+1)
{
if(((c[length]>='a')&&(c[length]<='z'))||((c[length]>='A')&&(c[length]<='Z')))
 ca=ca+1;
}
printf("You entered %d alphabets\n",ca);
}
//Every string is terminated by a special character called NULL - '\x0'
//c[length] is one character -> length value starts from 0
//ca counts the number of alphabets

