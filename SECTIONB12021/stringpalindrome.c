/*INPUT:
Enter a string?MADAM
OUTPUT:
MADAM is a Palindrome
*/
#include<stdio.h>
void main(void)
{
char st[30],revst[30];
int i,j=0,flag=0;
printf("Enter a string?");
scanf("%s",st);
for(i=0;st[i]!='\x0';i=i+1); //Counting the number of chars in st
printf("There are %d characters in %s\n",i,st);
i=i-1; //Last character of the string
while(i>=0)
{
revst[j]=st[i]; //Make the first char of st as last char of revst and so on
j=j+1;
i=i-1;
}
j=j+1; //NULL will be added to revst at this index
revst[j]='\x0'; //add NULL to revst
printf("The reversed string is %s\n",revst);
for(i=0;st[i]!='\x0';i=i+1)
{
if(st[i]!=revst[i]) //Do a character by character comparison
{
 flag=1;
 break;
}
}
if(flag==1)
 printf("String is not a Palindrome\n");
else
 printf("String is a Palindrome\n");
}


