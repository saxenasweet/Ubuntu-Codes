#include<stdio.h>
void main(void)
{
FILE *fp1;
int n,m;
int tf=0;
int r;
fp1=fopen("prime.txt","w");
for(n=2;n<=100;n++)
{
for(m=1;m<=n;m++)
{
r=n%m;
if(r==0)
 tf++;
}
if(tf==2)
  fprintf(fp1,"%d\n",n);
tf=0;
}
fclose(fp1);
}
