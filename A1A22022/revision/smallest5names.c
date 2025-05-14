#include<stdio.h>
#include<string.h>
void main(void)
{
char nam[5][30];
int i,d;
char smallest[30];
//Input Names
gets(nam[0]);
strcpy(smallest,nam[0]);
for(i=1;i<5;i++)
{
gets(nam[i]);
d=strcmp(smallest,nam[i]);
if(d>0)
 strcpy(smallest,nam[i]);
}
puts("The smallest name is:");
puts(smallest);
}



