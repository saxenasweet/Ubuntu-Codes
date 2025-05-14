#include<stdio.h>
void main(void)
{
int i=3;
int j=2;
float k=(float)i/j;//Explicit data type conversion
//float k=(i*1.0)/j; -> implicit data type conversion
printf("%f",k);
}
