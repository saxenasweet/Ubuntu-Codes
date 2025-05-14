#include<stdio.h>
void main(void)
{
char alpha='a'; //a is stored in a character variable called alpha
int al,bl;
printf("%d\n",alpha); //Data type conversion -> Explicit and Implicit
printf("%c\n",al); //Implicit data type conversion
for(al=0;al<26;al=al+1)
{
 bl=97+al;
 printf("%c ",bl);
}
}
