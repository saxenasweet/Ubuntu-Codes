#include<stdio.h>
void main(void)
{
char n[30];
int l;
puts("Enter your full name?");
gets(n);
puts("Your initials are:");
printf("%c",n[0]);
for(l=0;n[l]!='\x0';l++)
{
if((n[l]==' ')&&(n[l+1]!=' '))
  printf("%c",n[l+1]);
}
}

