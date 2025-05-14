/*
a=1
X:
print(a)
a=a+1
if (a<=10) goto X
*/
/*
Code for printing numbers from 1 to 10
Written on 6 Sep 2022
By Kshitiz Saxena
*/
#include<stdio.h>
void main(void)
{
int i=1;
X: //Label
printf("%d\n",i);
i=i+1;
if(i<=10) goto X;
}

