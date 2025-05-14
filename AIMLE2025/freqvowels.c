#include<stdio.h>
void main(void)
{
char st[100];
char vowels[10]="aeiou";
int loop,l,c=0,d;
printf("Enter a sentence?");
scanf("%[^\n]s",st);
for(l=0;vowels[l]!='\x0';l++)
{
for(loop=0;st[loop]!='\x0';loop++)
{
if(vowels[l]==st[loop])
 c++;
}
printf("\n%c:",vowels[l]);
if(c!=0)
{
for(d=0;d<c;d++)
 printf("*");
}
//printf("\nThe vowel %c occurs %d times\n",vowels[l],c);
c=0;
}
printf("\n");
}
 
