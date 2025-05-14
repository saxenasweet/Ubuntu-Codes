// Ask the user to enter his or her gender and print a suitable message
#include<stdio.h>
void main(void)
{
char ch; //
printf("Enter your gender?");
scanf("%c",&ch);
if((ch=='M')||(ch=='m'))
 printf("\nHello Sir!");
else
 printf("\nHello Madam!");
}

