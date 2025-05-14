#include<stdio.h>
void main(void)
{
int sumofarray(int *array);
int num[5];
int loop;
for(loop=0;loop<5;loop++)
{
printf("Enter a number num[%d]?",loop+1);
scanf("%d",&num[loop]);//num[0],num[1],...,num[4]
}
printf("\nThe sum of numbers is %d\n",sumofarray(&num[0])); //&num[0] - address of the first integer
}
int sumofarray(int *array)
{
int sum=0;
int loop;
for(loop=0;loop<5;loop++)
{
sum=sum+(*array); //value that array points to which is num[0]
array++; //now array points to the next integer which is num[1] ->Forwarding the pointer
}
return sum;
}


