#include<stdio.h>
#include<stdlib.h>
void main(void)
{
int *m;
int  n,loop;
scanf("%d",&n);
m=(int *)calloc(n,sizeof(int));
//m=(int *)malloc(n*4);
//syntax
//ptr_var=calloc(numberofitems,sizeofeachitem)
for(loop=0;loop<n;loop++)
scanf("%d",m+loop);
//scanf("%d",m);
//m++;
printf("Printing elements entered:");
for(loop=0;loop<n;loop++)
printf("%d ",*(m+loop));
free(m); //Deallocate memory 
}
