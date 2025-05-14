/*
String 1:
st1="Ram"
String 2:
st2="Singh"
Output:
st3="RamSingh"
st3[0]='R'=st1[0]
st3[1]='a'=st1[1]
st3[2]='m'=st1[2]
st1[3]='\x0'->do not copy in st3
st3[3]='S'=st2[0]
st3[4]='i'=st2[1]
st3[5]='n'=st2[2]
st3[6]='g'=st2[3]
st3[7]='h'=st2[4]
Now copy NULL to st3
st3[8]='\x0'

Input:
Ram Singh
Output
R S
*/
#include<stdio.h>
void main(void)
{
char st1[20],st2[20],st3[40];
int i,j;
gets(st1);
gets(st2);
for(i=0;st1[i]!='\x0';i++)
 st3[i]=st1[i];
for(j=0;st2[j]!='\x0';j++)
 st3[i+j]=st2[j];
st3[i+j]='\x0';
puts(st3);
}
