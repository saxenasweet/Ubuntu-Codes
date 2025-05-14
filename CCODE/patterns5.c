/*
Q.1
Write a code to draw the following pattern:
1
12
123
1234
12345
123456

Here the user enters the number of rows

Q.2
1
23
456
78910
11121314


Q.3
1
01
010
1010
10101
010101

Q.4
      1
     111 
    11111
   1111111
  111111111

*/
#include<stdio.h>
void main(void)
{
int n,digit=1;
int i,j;
scanf("%d",&n);
for(i=1;i<=n;i=i+1)
{
for(j=1;j<=i;j=j+1)
{
printf("%d",digit);
digit=digit+1;
}
printf("\n");
}
}



