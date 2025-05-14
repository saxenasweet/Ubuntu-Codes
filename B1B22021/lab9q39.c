#include<stdio.h>
#include<stdlib.h>
void main(void)
{
FILE *fp1,*fp2,*fp3;
int d;
fp1=fopen("number.txt","r");
fp2=fopen("odd.txt","w");
fp3=fopen("even.txt","w");
if(fp1==NULL)
{
 printf("Cannot open file!Exiting...\n");
 exit(0);
}
while(!feof(fp1))
{
 fscanf(fp1,"%d",&d);
 if(d%2==0)
 fprintf(fp3,"%d\n",d);
 else
 fprintf(fp2,"%d\n",d);
}
fclose(fp1);
fclose(fp2);
fclose(fp3);
}

