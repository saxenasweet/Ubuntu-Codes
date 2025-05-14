#include<stdio.h>
#include<string.h>
void main(void)
{
int l;
char c[2][100]={"AMIT KUMAR SINGH","DEEPAK SINGH"};
char news[100];
char a[20]="SRM";
char b[20]="NCR";
puts(c[0]);
puts(c[1]);
putc(c[0][1],stdout); //printf("%c",c[0][1]);
putc(c[1][1],stdout);
l=strlen(c[0]);
printf("There are %d characters in %s\n",l,c[0]);
strcpy(news,c[0]); //strcpy(destination,source)
printf("The new string is %s\n",news);
strcat(a,b);
printf("The concatenated string is %s\n",a);
}

