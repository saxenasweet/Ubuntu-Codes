#include<stdio.h>
void main(void)
{
//int a[10];//Array is a collection of homogeneous data type values
struct student
{
int sno; //Field
float pcmper;//field
char gender;//Field
}amit; //tag name
//Structure is a collection of hetrogeneous data type values
amit.sno=1; //Assigning values to different fields
amit.pcmper=87.5;
amit.gender='M';
printf("%d %f %c\n",amit.sno,amit.pcmper,amit.gender);
}

