#include<stdio.h>
#include<stdlib.h>
void main(void)
{
int *m;
int  n,loop,greatest;
n=20;
m=(int *)calloc(n,sizeof(int));
//m=(int *)malloc(n*sizeof(int));
for(loop=0;loop<n;loop++)
 scanf("%d",&m[loop]);

greatest=m[loop];
for(loop=1;loop<n;loop++)
{
 if(greatest<m[loop])
    greatest=m[loop];
}
printf("The greatest number is %d\n ",greatest);
free(m); //Deallocate memory 
}
