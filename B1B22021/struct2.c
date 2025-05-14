#include<stdio.h>
void main(void)
{
int loop;
struct student
{
int rollno;
float pcmper;
}b1[4]; //Array of structures
//b1[0].rollno ->roll number of first student
//b1[3].rollno ->roll number of last student
//b1[0].pcmper ->pcmper for first student
//b1[3].pcmper ->pcmper for last student
for(loop=0;loop<4;loop++)
{
scanf("%d %f",&b1[loop].rollno,&b1[loop].pcmper);
}
printf("Printing records...\n");
for(loop=0;loop<4;loop++)
printf("%d %.1f\n",b1[loop].rollno,b1[loop].pcmper);
}
