#include<stdio.h>
void main(void)
{
float fg=123.456;
float bg=0.00123;
printf("%g %E\n",fg,bg); //Printf float values in Scientific Notation
}
//Output:
//1.234560e+02 1.230000E-03
//%g prints the exact float value where as %f prints upto 6 decimal places
