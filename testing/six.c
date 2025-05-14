#include<stdio.h>
#include<stdlib.h>
void main(void)
{
int *p;
int n,m;
scanf("%d",&n);
p=(int *)calloc(n,sizeof(int));
for(m=0;m<n;m++,p++)
 scanf("%d",p);
printf("Printing Elements....\n");
p-=n;
for(m=0;m<n;m++,p++)
 printf("%d\n",*p);
}

