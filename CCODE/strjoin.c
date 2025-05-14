//Write a code to add two strings
//st1="He" st2="Go" st1+st2=String Concatenation  st1="HeGo"
//Ask the user to enter two strings
//String1="He"
//String2="Go"
//Output: String1="HeGo"

#include<stdio.h>
void main(void)
{
int l1=0,l2=0,current=0;
char st1[20],st2[10];
printf("\nEnter String 1?");
scanf("%s",st1);
printf("\nEnter String 2?");
scanf("%s",st2);
while(st1[l1]!='\x0')
{
l1++;
}
while(st2[l2]!='\x0')
{
l2++;
}
printf("\nLength of %s is %d and that of %s is %d\n",st1,l1,st2,l2);
/*
st1[0]='H'
st1[1]='e'
st2[0]='G'
st2[1]='o'
st1[2]='\x0'
st2[2]='\x0'
Output -> st1="HeGo"
st1[0]='H'
st1[1]='e'
st1[2]='G'
st1[3]='o'
st1[4]='\x0'
*/
current=l1;
l2=0;
while(st2[l2]!='\x0')
{
st1[current]=st2[l2];
current++;
l2++;
}
st1[current]='\x0';
printf("\nThe concatenated string is %s\n",st1);
}

