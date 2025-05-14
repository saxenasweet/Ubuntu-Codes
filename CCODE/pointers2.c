#include<stdio.h>
#include<stdlib.h>
void main(void)
{
int r,c;
int a,b;
int **p;
p=(int **)malloc(r*(sizeof(int*)));
for(a=0;a<r;a++)
p[a]=(int *)malloc(c*sizeof(int));
}



