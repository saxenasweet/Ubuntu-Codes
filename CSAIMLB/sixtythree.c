#include<stdio.h>
#include<math.h>
void main(void)
{
float v;
float l,r;
int i;
for(l=0;l<4;l=l+.4)
{
r=exp(l);
for(i=0;i<r;i++)
{
printf (" ");
}
printf("*\n");
}
}

