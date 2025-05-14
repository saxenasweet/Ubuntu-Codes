#include<stdio.h>
void main(void)
{
FILE *fp;
char fname[30];
int tv=0,tc=0;
char c;
printf("Enter file you want to open?");
scanf("%s",fname);
fp=fopen(fname,"r");
while(1)
{
c=fgetc(fp); //get one character from the file
if(feof(fp))
  break;
if((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u'))
 tv++;
tc++;
}
printf("There are %d vowels and %d characters\n",tv,tc);
fclose(fp);
}

