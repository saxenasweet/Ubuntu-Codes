#include<stdio.h>
void main(void)
{
int i,j,g;
scanf("%d %d",&i,&j);
g=(i<j)?i:j;
while(g>0)
{
if((i%g==0)&&(j%g==0))
 break;
g--;
}
printf("GCF of %d and %d is %d\n",i,j,g);
}

