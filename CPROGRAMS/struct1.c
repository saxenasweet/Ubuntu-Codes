#include<stdio.h>
void main(void)
{
struct telephonedir
{
int sno;
char name[30];
char mobilenumber[10];
}amit,deepak;
scanf("%d %[^\n]s",&amit.sno,amit.name);
scanf("%s",amit.mobilenumber);
printf("S.No : %d\nName: %s\nMobile Number: %s",amit.sno,amit.name,amit.mobilenumber);
}
