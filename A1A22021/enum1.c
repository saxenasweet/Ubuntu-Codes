#include<stdio.h>
void main(void)
{
enum day_of_week{sun=1,mon,tue=8,wed,thu=-1,fri=-2,sat=-3};
enum day_of_week day;
day=wed;
printf("%d\n",wed); //Output is 9
day=fri;
printf("%d\n",fri); //Output is -2
}

