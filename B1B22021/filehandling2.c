#include<stdio.h>
#include<stdlib.h>
void main(void)
{
FILE *fp;
int i;
char fname[30];
char mnumber[15];
fp=fopen("numbers.txt","a");
if(fp==NULL)
{
 printf("File cannot be opened..");
 exit(0);
}
printf("\nEnter how many friends you have?");
scanf("%d",&i);
while(i>0)
{
printf("Enter your friend name and mobile number?");
scanf("%s %s",fname,mnumber);
fprintf(fp,"%s %s\n",fname,mnumber);
i--;
}
fclose(fp);
}

