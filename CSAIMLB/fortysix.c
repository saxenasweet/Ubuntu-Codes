#include<stdio.h>
void main(void)
{
char st[30];//30 bytes are allocated to st at compile time
//This type of memory allocation is called Static Memory Allocation
//Leads to wastage of memory
int i;
gets(st);//scanf("%[^\n]s",st);
for(i=0;st[i]!='\x0';i++);
printf("Size of String is %d\n",sizeof(st));
printf("The length of the string %s is %d\n",st,i);
i--;
printf("The reverse of %s is :\n");
while(i>=0)
{
 printf("%c",st[i]);
 i--;
}
printf("\n");
}

