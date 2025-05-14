#include<stdio.h>
#include<stdlib.h>
void main(void)
{
int n;
int loop;
char *st; //char st[100] ->static memory allocation 100 bytes are reserved
char c;
int countlower=0;
int countupper=0;
printf("Enter how characters you want to enter in the string?");
scanf("%d",&n);
scanf("%c",&c);
st=(char *)calloc(n,sizeof(char));//st will point to the first character ->dynamic memory allocation
printf("Enter the string?");
scanf("%[^\n]",st);
printf("You entered %s\n",st);
//Lets count the number of lower case alphabets and upper case alphabets in the string
for(loop=0;loop<n;loop++)
{
if((*st>='A')&&(*st<='Z'))
 countupper++;
if((*st>='a')&&(*st<='z'))
 countlower++;
st++; //so that st points to the next character
}
//Now st is pointing to beyond the last character
st-=n; //Now st points to the first character 
printf("\nThere are %d upper case alphabets and %d lower case alphabets in the string %s\n",countupper,countlower,st);
free(st); //Now memory allocated for the string is deallocated
}

