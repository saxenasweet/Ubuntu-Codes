#include<stdio.h>
void main(void)
{
int p,c,m,a;
scanf("%d %d %d",&p,&c,&m);
a=(p+c+m)/3;
if(a>90)
 printf("FIRST DIVISION..\n");
else if((a>70)&&(a<=90))
 printf("SECOND DIVISION..\n");
else if((a>50)&&(a<=70))
 printf("THIRD DIVISION..\n");
else
 printf("FAIL..\n");
}

