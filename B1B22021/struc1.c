/*
Syntax of a structure:
struct <name>
{
data_type var_nam1;
data_type var_nam2;
.
.
.}tag1,tag2,...
*/
#include<stdio.h>
void main(void)
{
char dummy;
struct student
{
int age;
char gender;
float pcmper;
}amit,deepaka,ravi;
scanf("%d %c %f",&amit.age,&amit.gender,&amit.pcmper);
scanf("%c",&dummy);
scanf("%d %c %f",&deepaka.age,&deepaka.gender,&deepaka.pcmper);
scanf("%d %c %f",&ravi.age,&ravi.gender,&ravi.pcmper);
printf("%d %c %.1f\n",amit.age,amit.gender,amit.pcmper);
printf("%d %c %.1f\n",deepaka.age,deepaka.gender,deepaka.pcmper);
printf("%d %c %.1f",ravi.age,ravi.gender,ravi.pcmper);
}


