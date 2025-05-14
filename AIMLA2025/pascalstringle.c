#include<stdio.h>
void main(void)
{
int a[10][10],b,c,n,dummy;
scanf("%d",&n);
//Initializing
for(b=0;b<n;b++)
{
for(c=0;c<=b;c++)
if((c==0)||(c==b))
 a[b][c]=1;
}
//Print the initial pattern
for(b=0;b<n;b++)
{
for(c=0;c<=b;c++)
printf("%d",a[b][c]);
printf("\n");
}
for(b=2;b<n;b++)
{
for(c=1;c<=b-1;c++)
a[b][c]=a[b-1][c-1]+a[b-1][c];
}
//Print the pattern
for(b=0;b<n;b++)
{
for(c=0;c<=b;c++)
 printf("%d",a[b][c]);
printf("\n");
}
}
