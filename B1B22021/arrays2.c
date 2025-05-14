#include<stdio.h>
void main(void)
{
//A String is a 1-Dimensional character Array
char nam[20];
int loop;
scanf("%s",nam); //"AMIT"
 //nam[0] ->First character
//name[1] ->Second character
//nam[0]='A'
//nam[1]='M'
//nam[2]='I'
//nam[3]='T'
//nam[4]='\x0' NULL
for(loop=0;nam[loop]!='\x0';loop++)
{
 printf("%c\n",nam[loop]);
}
}

