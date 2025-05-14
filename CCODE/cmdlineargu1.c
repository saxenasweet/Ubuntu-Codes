#include<stdio.h>
#include<math.h>
#include<string.h>
void main(int argc, char *argv[])
{
int convert(char *s);
int total=0;
printf("Total number of arguments are %d\n",argc);
for(int i=1;i<argc;i++)
total+=convert(argv[i]);//printf("%s\n",argv[i]);
printf("\nResult=%d\n",total);
}
int convert(char *s)
{
int d=0;
int sum=0;
int t=strlen(s);
for(int c=t-1;c>=0;c--)
{
sum+=pow(10,d)*(s[c]-48);
d++;
}
return sum;
}
