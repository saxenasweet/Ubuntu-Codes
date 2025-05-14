#include<stdio.h>
void main(void)
{
enum year_month{jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};
int i;
for(i=jan;i<=dec;i++)
printf("%d\n",i);
}
