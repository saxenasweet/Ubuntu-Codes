#include<stdlib.h>
#include<stdio.h>
void main(void)
{
int *p;
int n=20;
int l;
int g;
p=(int *)malloc(sizeof(int)*20);
if(p==NULL)
 exit(0);
printf("Enter a number?");
scanf("%d",p);
g=*p;
p++;
for(l=0;l<19;l++,p++)
{
printf("Enter a number?");
scanf("%d",p);
if(g<*p)
g=*p;
} //p will to the next block after the last number
p-=20; //rewinding so that p points to the first number
printf("%d\n",*p);
printf("\nThe greatest number is %d",g);
}
