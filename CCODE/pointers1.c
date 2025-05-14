#include<stdio.h>
#include<stdlib.h>
void main(void)
{
int *a;
int loop;
a=(int *)calloc(5,sizeof(int));
for(loop=0;loop<5;loop++)
 scanf("%d",a+loop);
for(loop=0;loop<5;loop++)
 printf("%d ",*(a+loop));
}
