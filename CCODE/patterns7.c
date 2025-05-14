#include<stdio.h>
void main(void)
{
char st[13]="ABCDEFGFEDCBA";
int spacesloc=6;
int numberofspaces=1;
int counter,t,r,s;
printf("%s\n",st);
for(counter=0;counter<=5;counter++)
{
for(s=0;s<spacesloc;s++)
 printf("%c",st[s]);
for(r=spacesloc;r<(spacesloc)+((numberofspaces*2)-1);r++)
 printf(" ");
for(s=(spacesloc)+((numberofspaces*2)-1);s<13;s++)
 printf("%c",st[s]);
printf("\n");
numberofspaces++;
spacesloc--;
}
}

