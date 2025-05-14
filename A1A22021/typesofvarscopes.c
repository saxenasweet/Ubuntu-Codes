#include<stdio.h>
int j=7; //Scope of j is the entire code -> j is called Global Variable
void main(void)
{
int i=6; //Local
i++;
void print(void);
printf("i is a local variable...%d\n",i);
printf("j is a global variable...%d\n",j);
print();
}
void print(void)
{
extern int i;
printf("%d\n",i); 
printf("%d\n",j); //j is a Global variable
}
int i=10; //Global
