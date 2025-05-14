#include<stdio.h>
void main(void)
{
char st1[20],st2[20];
int l1=0,l2=0;
int flag=0;
int loop;
/*
st1->5 characters st2 ->4 characters
Step 1:
Count the number of characters in st1 and st2
*/
scanf("%s",st1);
scanf("%s",st2);
while(st1[l1]!='\x0')
{
l1++;
}
while(st2[l2]!='\x0')
{
l2++;
}
if(l1!=l2)
 printf("\nStrings are different");
else
{
printf("\nChecking if the strings are same..\n");
//They could be same
for(loop=0;loop<=l1;loop++)
{
if(st1[loop]!=st2[loop])
{
flag=1; //the moment the first character in st1 and st2 dont match
break;
}
}
if(flag==0)
printf("\nBoth strings match");
else
printf("\nBoth strings are different");
}
}
