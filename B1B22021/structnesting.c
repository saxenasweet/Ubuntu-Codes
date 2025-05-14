#include<stdio.h>
void main(void)
{
struct student
{
int rollno;
struct dateofbirth
{
int dd;
int mm;
int yyyy;
}dob;
}amit;
scanf("%d %d %d %d",&amit.rollno,&amit.dob.dd,&amit.dob.mm,&amit.dob.yyyy);
printf("Amit Details are:-\n");
printf("%d %d %d %d",amit.rollno,amit.dob.dd,amit.dob.mm,amit.dob.yyyy);
}
