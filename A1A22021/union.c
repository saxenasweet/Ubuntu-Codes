//union is datatype
//union can have multiple members like a structure
//all members of a union share the same memory which is allocated.
//The memory allocated is equal to the highest  memory  taken up by an individual member
#include<stdio.h>
#include<string.h>
void main(void)
{
union students
{
int rollno;
float pcmper;
char name[30];
}classcs;
printf("%ld\n",sizeof(classcs));
classcs.rollno=1;
classcs.pcmper=95.4;
strcpy(classcs.name,"AMIT KUMAR");
printf("%d %f %s\n",classcs.rollno,classcs.pcmper,classcs.name);
}

