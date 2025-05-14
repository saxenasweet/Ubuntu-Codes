/* Print a pattern:

*
**
***
****
*****

*/
#include<stdio.h>
void main(void)
{
int n;
int loop1;
int loop2;
scanf("%d",&n);
for(loop1=1;loop1<=n;loop1=loop1+1)
{
for(loop2=1;loop2<=loop1;loop2=loop2+1)
{
printf("*");
}
printf("\n");
}
}

