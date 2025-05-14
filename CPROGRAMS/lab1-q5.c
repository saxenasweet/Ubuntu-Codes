#include<stdio.h>
void main(void)
{
int p,c,m,tpm,tpcm,flag=0;
scanf("%d %d %d",&p,&c,&m);
tpm=p+m;
tpcm=p+c+m;
if(p>40)
{
if(c>50)
{
if(m>60)
{
if((tpm>150)||(tpcm>200))
{
 flag=1;
 printf("\nYou are eligible for the course");
}
}
}
}
if(flag==0)
 printf("\nYou are not eligible for the course");

}
