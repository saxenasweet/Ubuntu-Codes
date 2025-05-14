#include<stdio.h>
void main(void)
{
char ch[30];
char vowels[10]="aeiou";
int l=0,m,count=0;
printf("Enter a string?");
scanf("%[^\n]s",ch);
while(vowels[l]!='\x0')
{
for(m=0;ch[m]!='\x0';m++)
{
if(vowels[l]==ch[m])
 count++;
}
printf("The vowels %c occurs %d times in the string\n",vowels[l],count);
l++;
count=0;
}
}

