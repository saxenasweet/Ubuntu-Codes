#include<stdio.h>
#include<stdlib.h>
void main(void)
{
int *p;
int m,n;
scanf("%d",&n);
p=(int *)calloc(n,sizeof(int));
if(p==NULL)
 {
  printf("Calloc failed..\nExiting\n");
  exit(0);
 }
for(m=0;m<n;m++,p++)
 scanf("%d",p);
p-=n;
printf("Printing elements...\n");
for(m=0;m<n;m++,p++)
 printf("%d\n",*p);
p-=n;
free(p);
}

