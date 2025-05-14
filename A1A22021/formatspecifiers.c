#include<stdio.h>
void main(void)
{
int i;
int a;
long int j;
float k;
double l;
char st[20]="bitmeerut";
k=22.0/7;
i=1234;
printf("%ld %ld %ld %ld\n",sizeof(i),sizeof(j),sizeof(k),sizeof(l));
//for(i=1;i>0;i++);
//printf("Smallest Integer is %d and Largest Integer is %d\n",i,i-1);
printf("%.2f\n",k);
printf("%3.2d\n",i);
printf("%4.2sWelcome",st);
printf("%o %x\n",17,17);
scanf("%d",&a);
printf("%p",&a);
}

