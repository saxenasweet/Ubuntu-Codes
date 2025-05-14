#include<stdio.h>
void main(void)
{
char st[50];
int bs=0,l,cd=0,cv=0,ca=0;
printf("Enter a string?");
scanf("%[^\n]s",st);
for(l=0;st[l]!='\x0';l++)
{
if (st[l]==' ')
  bs++;
if ((st[l]>='0')&&(st[l]<='9'))
  cd++;
if((st[l]=='a')||(st[l]=='e')||(st[l]=='i')||(st[l]=='o')||(st[l]=='u'))
  cv++;
if(((st[l]>='a')&&(st[l]<='z'))||((st[l]>='A')&&(st[l]<='Z')))
  ca++;
}
printf("Total blank spaces ...%d\n",bs);
printf("Total digits...%d\n",cd);
printf("Total vowels...%d\n",cv);
printf("Total alphabets...%d\n",ca);
}
