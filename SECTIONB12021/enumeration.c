#include<stdio.h>
void main(void)
{
enum week {Mon=2,Tue, Wed, Thur, Fri=1, Sat, Sun};
enum  week day;
day=Sun;
printf("%d\n",day);
}

/*
Enumeration or enum is a user defined data type in C. It is used
to assign names to integral constants, the names make a program easy to 
read and maintain
*/
