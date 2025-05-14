#include<stdio.h>
//Union is used in Hardware Programming where memory is limited
/*
Syntax:
union <tagname>
{
data_type varname1;
data_type varname2;
.
.
.
}<var1><,var2>...
e.g.
union student
{
char gender; //1 byte
char name[30]; //30 bytes
int age; //4 bytes
float pcmper; //4 bytes
}amit;
Structure -> Memory occupied is sum total of memory taken by individual members
Union -> Memory occuiped is the maxmimum memory taken up a member
This example will take 30 bytes of RAM and at a time only one data type value will be stored
*/
#include<stdio.h>
void main(void)
{
union student
{
char gender;
int age;
float pcmper;
}amit;
printf("This union takes %d bytes of memory\n",sizeof(union student));
amit.gender='M';
printf("Gender is %c\n",amit.gender);
amit.age=19;
printf("Gender is %c and Age is %d\n",amit.gender,amit.age); //Garbage is printed for gender
amit.pcmper=77.75;
printf("Gender is %c , Age is %d and PCM per is %f\n",amit.gender,amit.age,amit.pcmper); //Garbage is printed for gender and age 
}

