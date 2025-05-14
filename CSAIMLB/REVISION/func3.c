#include<stdio.h>
void main(void)
{
void area_peri_rect(int x,int y);
int a,b;
scanf("%d %d",&a,&b);
area_peri_rect(a,b);
}
void area_peri_rect(int x,int y)
{
printf("Area=%d\n",x*y);
printf("Perimeter=%d\n",((x+y)*2));
}

