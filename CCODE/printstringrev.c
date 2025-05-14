//Ask the user to enter his or her name and print it in reverse order
//Input: AMIT
//OUtPUT: TIMA
#include<stdio.h>
void main(void)
{
char name[16];
int n=0;
printf("Enter your name?");
scanf("%s",name);
//NULL is a special character and is used to indicate End of String
while(name[n]!='\x0')
{
n++;
}
//name="AMIT" name[0]='A' name[1]='M' name[2]='I' name[3]='T' name[4]='\x0'
printf("\nThe length of string is %d\n",n);
printf("\nThe string in reverse order is:");
while(n>=0)
{
printf("%c",name[n]);
n--;
}
}

