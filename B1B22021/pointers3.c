#include<stdlib.h>
#include<stdio.h>
void main(void)
{
int *p;
int n,i,t;
scanf("%d",&n);
p=(int *)malloc(n*4);
if(p==NULL)
 {
  printf("Memory not available..");
  exit(0);
 }
t=n;
for(i=0;i<n;i++)
{
scanf("%d",p);
p++;
}
while(t>0)
{
p--;
printf("%d ",*p); //Numbers in reverse order are printed
t--;
}
printf("\n%d ",*p); //First number entered is printed
free(p); //Memory allocated is reclaimed by the OS i.e. it is deallocated
}
