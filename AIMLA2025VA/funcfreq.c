#include<stdio.h>
int main(void)
{
char str[100];
int totfreqstr(char *ptr);
int t;
scanf("%[^\n]s",str);
t=totfreqstr(&str[0]);
printf("Total number of vowels in %s are %d\n",str,t);
}
int totfreqstr(char *ptr)
{
int x=0,count=0;
while(ptr[x]!='\x0')
{
if((ptr[x]=='a')||(ptr[x]=='e')||(ptr[x]=='i')||(ptr[x]=='o')||(ptr[x]=='u'))
 count++;  
x++;
}
return count;
}
