#include<stdio.h>
void main(void)
{
//char name1[30],name2[30];
char name[5][30];
int i;
//name[0]->First string
//name[1]->Second string
/*gets(name1);
gets(name2);*/
for(i=0;i<5;i++)
 gets(name[i]);
puts("You entered:");
/*puts(name1);
puts(name2);*/
for(i=0;i<5;i++)
 puts(name[i]);
printf("%c\n",name[0][1]);
}
