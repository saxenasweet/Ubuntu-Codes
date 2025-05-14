#include<stdio.h>
#include<string.h>
void main(void)
{
typedef struct Names{
char fname[30];
int age;
char fmobile[15];
} MYFRIENDS;
MYFRIENDS amit;
strcpy(amit.fname,"AMIT");
amit.age=19;
strcpy(amit.fmobile,"+919412012345");
printf("%s %d %s\n",amit.fname,amit.age,amit.fmobile);
}

