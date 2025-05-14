#include<stdio.h>
void main(void)
{
void print(char arr[]);
char a[6]="hellow";
print(a);
}
void print(char arr[])
{
int i;
for(i=0;i<6;i++)
printf("%c ",arr[i]);
}
