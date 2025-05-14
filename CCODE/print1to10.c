#include<stdio.h>
void main(void)
{
int i=1;
int n;
scanf("%d",&n);
Loop: //Label
printf("%d\n",i*n);
i=i+1;
if(i<=10) goto Loop;
}
