#include<stdio.h>
void main(void)
{
int m,p,c,tpm,tpcm;
scanf("%d %d %d",&m,&p,&c);
tpm=m+p;
tpcm=p+c+m;
if(((p>40)&&(c>50)&&(m>60)&&(tpm>150))||(tpcm>200))
 printf("Eligible for the course...\n");
else
 printf("Not eligible for the course...\n");
}

