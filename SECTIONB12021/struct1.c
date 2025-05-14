/*
Structure:
Structure is a collection of non homogeneous data types.
You declare a structure with the key word struct
Syntax:
struct <tagname>
{
datatype1 varname1;
datatype2 varname2;
.
.
.
.
}<va1><,var2>....
*/
#include<stdio.h>
void main(void)
{
int total1,total2;
struct student
{
int rollno;
int phy;
int chem;
int maths;
}ravi,amit;
printf("Size of structure for one record is %d bytes\n",sizeof(struct student));
printf("Enter roll num, marks of phy , chem and maths of Ravi?");
scanf("%d %d %d %d",&ravi.rollno,&ravi.phy,&ravi.chem,&ravi.maths);
printf("Enter roll num, marks of phy, chem and maths of Amit?");
scanf("%d %d %d %d",&amit.rollno,&amit.phy,&amit.chem,&amit.maths);
total1=ravi.phy+ravi.chem+ravi.maths;
total2=amit.phy+amit.chem+amit.maths;
if(total1>total2)
 printf("Ravi is the topper\n");
else
 if(total1<total2)
 printf("Amit is the topper\n");
else
 printf("Both Ravi and Amit are toppers\n");
}
