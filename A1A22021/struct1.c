#include<stdio.h>
#include<string.h>
void main(void)
{
//Structure is a collection of non similar data types
struct student
{
char name[30];
float pcmper;
};
struct student a,d;
strcpy(a.name,"AMIT VERMA");
a.pcmper=98.4;
strcpy(d.name,"DEEPAK SHARMA");
d.pcmper=93.2;
printf("%s %.2f\n",a.name,a.pcmper);
printf("\n%s %.2f\n",d.name,d.pcmper);
}
