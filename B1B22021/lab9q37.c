#include<stdio.h>
void main(void)
{
char ch;
int t=0;
FILE *fp1,*fp2;
fp1=fopen("a.txt","r");
fp2=fopen("b.txt","w");
while(!feof(fp1))
{
fscanf(fp1,"%c",&ch);
fprintf(fp2,"%c",ch);
t++;
}
fclose(fp1);
fclose(fp2);
printf("I have copied %d characters\n",t);
}

