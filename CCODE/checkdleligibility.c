#include<stdio.h>
void main(void)
{
int age;
scanf("%d",&age);
if(age<16)
 printf("\nNO DL");
else if ((age>=16)&&(age<20))
  printf("\nLearning DL");
  else if ((age>=20)&&(age<70))
   printf("\nDL");
    else
       printf("\nToo old for a DL");
}

