#include<stdio.h>
void main(void)
{
static int cs1[26],cs2[26],d;
char s1[30],s2[30],ch;
int loop;
gets(s1);
gets(s2);
for(ch='a';ch<='z';ch++)
{
for(loop=0;s1[loop]!='\x0';loop++)
{
if(ch==s1[loop])
{
 d=ch-97;
 cs1[d]++;
}
}
}
for(ch='a';ch<='z';ch++)
{
for(loop=0;s2[loop]!='\x0';loop++)
{
if(ch==s2[loop])
{
 d=ch-97;
 cs2[d]++;
}
}
}
d=0;

for(loop=0;loop<26;loop++)
{
 if(cs1[loop]!=cs2[loop])
  d=1;
}
if(d==1)
 printf("Not an anagram\n");
else
 printf("Anagram\n");

}

