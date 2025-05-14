#include<stdlib.h>
#include<stdio.h>
void main(void)
{
char *s,*t,d;
int n,a,b;
printf("Enter how many characters you want to enter?");
scanf("%d",&n);
scanf("%c",&d);
s=(char *)malloc(n*sizeof(char));
t=(char *)malloc(n*sizeof(char));
printf("Enter the string you want me to reverse?");
gets(s);//scanf("%[^\n]s",s)
for(a=n-1,b=0;a>=0;a--,b++)
t[b]=s[a];//Store the reverse of string in t
t[b]='\x0';//Add NULL to t
for(a=0;a<n;a++)
s[a]=t[a];//Copy all characters from t to s
s[a]='\x0';//Add NULL to s
printf("\nThe reversed string is:- %s \n",s);
}



