#include<stdio.h>
#include<string.h>
void main(void)
{
int i,d;
char nam[5][30];
char smallest[30];
gets(nam[0]);
strcpy(smallest,nam[0]);
for(i=1;i<5;i++)
{
gets(nam[i]);
d=strcmp(smallest,nam[i]);
if(d>0)
 strcpy(smallest,nam[i]);
}
printf("The smallest name is %s\n",smallest);
}

