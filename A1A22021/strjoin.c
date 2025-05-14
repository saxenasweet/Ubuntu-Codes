//Write a code to join two strings
//Input:
//AMIT
//SINGH
//Output:
//AMITSINGH
#include<stdio.h>
void main(void)
{
char st1[10],st2[10],st3[20],d;
int i,j;
printf("Enter String 1?");
scanf("%[^\n]s",st1);
//scanf("%c",&d);
printf("Enter String 2?");
scanf("%[^\n]s",st2);
for(i=0;st1[i]!='\x0';i++)
 st3[i]=st1[i];
for(j=0;st2[j]!='\x0';j++)
{
st3[i]=st2[j];
i++;
}
st3[i]='\x0';
printf("The concatenated string is %s\n",st3);
}

