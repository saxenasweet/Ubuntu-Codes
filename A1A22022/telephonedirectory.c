#include<string.h>
#include<stdio.h>
void main(void)
{
char sname[30];
int loop,flag;
struct telephone
{
char nam[30];
char phone[15];
}f1[5];
for(loop=0;loop<5;loop++)
{
printf("Enter name?");
gets(f1[loop].nam);
printf("Enter phone number?");
gets(f1[loop].phone);
}
while(1)
{
flag=0;
printf("Enter name to be searched?");
gets(sname);
for(loop=0;loop<5;loop++)
{
if(strcmp(sname,f1[loop].nam)==0)
{ 
 puts(f1[loop].phone);
 flag=1;
}
}
if(flag==0)
 printf("Name not found..Search again\n");
}
}


