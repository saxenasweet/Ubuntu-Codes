 #include<stdio.h>
void main(void)
{
float pi=(float)22/7;// Explicit data type casting 
int a=3;
float b=6; //6.000000 //Implicit  data type casting
int c =b/a; //2
float d= b/a; //2.000000
printf("%d %f %f",c,d,pi);
}
