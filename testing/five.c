#include<stdio.h>
#include<stdlib.h>
void main(void)
{
int *p;
int n,m;
scanf("%d",&n);
p=(int *)malloc(n*sizeof(int));
if(p==NULL)
{
 printf("Memory allocation failed..Exiting!\n");
 exit(0);
}
for(m=0;m<n;m++,p++)
 scanf("%d",p);
printf("Printing elements...\n");
p-=n;
for(m=0;m<n;m++,p++)
 printf("%d\n",*p);
}

