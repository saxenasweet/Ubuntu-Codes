#include<stdio.h>
#include<string.h>
void main(void)
{
char st1[200],tos[20];
int flag=0,count;
int loop,lengthtos;
gets(st1);
gets(tos);
lengthtos=strlen(tos);
for(loop=0;st1[loop]!='\x0';loop++)
{
for(count=0;tos[count]!='\x0';count++)
{
 if(st1[loop+count]==tos[count])
  flag++;
}
if(flag==lengthtos)
{
 printf("Substring found...\n");
 flag=0;
 loop+=lengthtos;
}
flag=0;
}
}

