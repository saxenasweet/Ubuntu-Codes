#include<stdlib.h>
#include<stdio.h>
void main(void)
{
char *s,*t,d;
int n,a;
printf("Enter how many characters you want to enter?");
scanf("%d",&n);
scanf("%c",&d);
s=(char *)malloc(n*sizeof(char));
printf("Enter the string you want me to reverse?");
gets(s);
for(a=n-1;a>=0;a--)
printf("%c",s[a]);
printf("\n");
puts(s); //The string is not reversed, it is only printed in reverse
}



