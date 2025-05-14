#include<stdio.h>
#include<stdlib.h>
void main(void)
{
FILE *fp1,*fp2;
int d,sq;
fp1=fopen("number.txt","r");
fp2=fopen("numbersq.txt","w");
if(fp1==NULL)
{
 printf("Cannot open file!Exiting...\n");
 exit(0);
}
while(!feof(fp1))
{
 fscanf(fp1,"%d",&d);
 sq=d*d; 
 fprintf(fp2,"%d\n",sq);
}
fclose(fp1);
fclose(fp2);
}

