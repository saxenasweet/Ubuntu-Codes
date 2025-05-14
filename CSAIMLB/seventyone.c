#include<stdio.h>
#include<stdlib.h>
void main(void)
{
int *p;
int n,m;
//Here n is the number of integers I want to enter
scanf("%d",&n);
//Here we allocate memory using malloc
p=(int *)malloc(n*sizeof(int));
if(p==NULL)
{
 printf("Malloc failed.. Exiting\n");
 exit(0);
}
for(m=0;m<n;m++,p++)
 scanf("%d",p);
p-=n; //Rewinding so that p points to the first number
printf("Printing numbers..\n");
for(m=0;m<n;m++,p++)
 printf("%d ",*p);
printf("\n");
p-=n;//p is pointing the first number
free(p);
}

