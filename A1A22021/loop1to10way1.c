#include<stdio.h>
void main(void)
{
int i=1; //i is initialized to 1
x: //LABEL
printf("%d ",i);
i=i+1; //i is increased by 1
if(i<=10) 
 goto x;
}
//-single line comment
//comments are ignored by the compiler

