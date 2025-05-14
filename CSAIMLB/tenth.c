#include<stdio.h>
void main(void)
{
int i=1;
int m;
scanf("%d",&m);
BEG:
printf("%d\n",i*m);
i=i+1;
if(i==11)
 goto x;
goto BEG;
x:
printf("Out of loop\n");
}
