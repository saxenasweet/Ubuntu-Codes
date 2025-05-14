/*
1
12
123
1234
12345
*/
#include<stdio.h>
void main(void)
{
int n;
int i,j;
scanf("%d",&n);
for(j=1;j<=n;j=j+1) //Nested Loop
{
for(i=1;i<=j;i=i+1)
{
printf("1");//printf("%d",i);
}
printf("\n");
}
}
