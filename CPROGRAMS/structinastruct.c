#include<stdio.h>
void main(void)
{
struct abc
{
int rn;
struct dateofbirth
{
int dd;
int mm;
int yyyy;
}dob;
}amit;
scanf("%d %d %d %d",&amit.rn,&amit.dob.dd,&amit.dob.mm,&amit.dob.yyyy);
printf("Date of Birth: %d-%d-%d\n",amit.dob.dd,amit.dob.mm,amit.dob.yyyy);

}
