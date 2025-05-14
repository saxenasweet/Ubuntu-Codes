#include<string.h>
#include<stdio.h>
void main(void)
{
char n[30]="Hello-Welcome-To-SRM";
char *p;
p=strtok(n," - ");
while(p==NULL)
{
puts(p);
p=strtok(NULL," - ");

}
}


