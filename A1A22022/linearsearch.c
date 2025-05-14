//A code to implement linear search
#include<stdio.h>
void main(void)
{
int a[10];
int number;
int loop;
int flag=0;
printf("Enter 10 numbers one by one\n");
for(loop=0;loop<10;loop++)
{
printf("Enter number a[%d]?",loop);
scanf("%d",&a[loop]);
}
printf("Enter what number you want to search?");
scanf("%d",&number);
for(loop=0;loop<10;loop++)
{
if(a[loop]==number)
{
 printf("The number is found at location %d\n",loop);
 flag=1;
}
}
if(flag==0)
 printf("The number is not in the list\n");
}
