#include<stdio.h>
#include<stdlib.h>
void main(void)
{
int **p;
int r=2,c=3,a,b;
p=(int **)malloc(r*(sizeof(int *)));
for(a=0;a<r;a++)
p[a]=(int *)malloc(c*sizeof(int));

}
