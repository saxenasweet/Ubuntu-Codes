#include<stdio.h>
void main(void)
{
int p,c,m,tpm,tpcm;
scanf("%d %d %d",&p,&c,&m);
tpm=p+m;
tpcm=tpm+c;
if(((p>40)&&(c>50)&&(m>60))&&((tpm>150)||(tpcm>200)))
 printf("You are eligible for the course\n");
else
 printf("You are not eligible for the course\n");
}

