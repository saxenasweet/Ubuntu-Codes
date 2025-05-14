//Write a code to check if the string is a palindrome or not
//Write a code to reverse a string without using any string function
//Write a code to copy a string 
#include<stdio.h>
#include<string.h>
void main(void)
{
char str1[15],str2[15];
int n,length;
int loc=0;
scanf("%s",str1);
/*
str1="jack"
str2 will contain reverse of str1
str2[0]='k'
str2[1]='c'
str2[2]='a'
str2[3]='j'
str2[4]='\x0'
*/
length=strlen(str1);
length--;
while(length>=0)
{
str2[loc]=str1[length]; //Copying from last
loc++;
length--;
}
str2[loc]='\x0';
n=strcmp(str1,str2);
if(n==0)
 printf("\nStrings are same");
else
 printf("\nStrings are different");
//Is 'M' same as 'm' ? "madam" is not the same as "Madam"
//Write a code to compare two strings without using any string function (donot include string.h)
}

