#include<stdio.h>
void main(void)
{
struct student
{
char sname[30];
int rollno;
float pcmper;
}csa1[3]; //Array of structures
//csa1[0].sname
//csa1[1].rollno
//csa1[2].pcmper
int count;
for(count=0;count<3;count++)
{
scanf("%s %d %f",csa1[count].sname,&csa1[count].rollno,&csa1[count].pcmper);
}
for(count=0;count<3;count++)
{
printf("%s %d %f\n",csa1[count].sname,csa1[count].rollno,csa1[count].pcmper);
}
}

