#include<stdio.h>
void main(void)
{
int a[10][10],r,c,ceven=0,codd=0,l,m;
scanf("%d %d",&r,&c); //Order of Matrix
for(l=0;l<r;l++)
{
for(m=0;m<c;m++)
{
printf("Enter a[%d][%d]?",l,m);
scanf("%d",&a[l][m]);
if(a[l][m]%2==0)
 ceven++;
else
 codd++;
}
}
printf("Even Elements are %d and Odd Elements are %d\n",ceven,codd);
}

