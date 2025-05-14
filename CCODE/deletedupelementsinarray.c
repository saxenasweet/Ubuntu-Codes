#include<stdio.h>
void main(void)
{
int a[10];
int limit=10,dummy;
int i,o,k,flag=1,l,m;
for(i=0;i<10;i++)
 scanf("%d",&a[i]);
while(flag)
{
flag=0;
for(o=0;o<limit;o++)
{
for(i=(o+1);i<limit;i++)
{
if(a[o]==a[i])//Duplicate element found 
{
for(k=i;k<limit;k++)
 a[k]=a[k+1]; //If there is a duplicate element shift elements by left
limit--; //Duplicate element removed, there are one less total elements
}
}
}
for(l=0;l<limit;l++)
{
for(m=(l+1);m<limit;m++)
{
if(a[l]==a[m]) //Search if there is any duplicate element
 flag=1; //Repeat the process if there is 
}
}
if(flag==0) //If there are no duplicate elements
 break; //Come out of the loop
}
printf("The list with removed duplicated elements is:");
for(o=0;o<limit;o++)
 printf("%d ",a[o]);
}
