#include<stdio.h>
void main(void)
{
//At one time 4 bytes are being read - 32 bit machine
struct student
{
char sname[30]; //String
float pcmper; //Float value
int rollno; //Integer
}amit;
scanf("%s",amit.sname); //1 char->1 byte ->30 char->30 byte
scanf("%f",&amit.pcmper);// -> 1 float - 4 bytes
scanf("%d",&amit.rollno);// ->1 int -4 bytes
printf("%s %f %d\n",amit.sname,amit.pcmper,amit.rollno);
printf("%ld\n",sizeof(struct student)); //40 bytes
//Format specifier ld is used for long int
}
