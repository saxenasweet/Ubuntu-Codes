/*
Input 10 numbers?
1
2
3
1
2
3
1
2
3
1
Enter a number to search?
1
The number 1 at location 0,3,6,9
*/
#include<stdio.h>
void main(void)
{
int a[10];
int num;
int loop;
int flag=0;
for(loop=0;loop<10;loop++)
{
scanf("%d",&a[loop]);
}
printf("Enter a number you want me to search?");
scanf("%d",&num);
for(loop=0;loop<10;loop++)
{
if(a[loop]==num)
{
 printf("%d found at location %d\n",num,loop);
 flag=1;
}
}
if(flag==0)
 printf("Number not found in the list\n");
}
