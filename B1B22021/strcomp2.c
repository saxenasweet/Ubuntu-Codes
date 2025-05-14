#include<string.h>
#include<stdio.h>
void main(void)
{
//char st1[6]="hello"; //char st1[n+1]
//char st2[6]="hello";
//char st2[]="hello";
//char st2[6]={'h','e','l','l','o','\x0'};
//char st1[20],st2[20];
char st1[],st2[];
int r;
scanf("%s",st1);
scanf("%s",st2);
r=strcmp(st1,st2);
printf("%d\n",r);
if(r>0)
 printf("st1 is greater");
else if (r<0)
 printf("st2 is greater");
else
 printf("Both are same");
}

