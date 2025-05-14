//1234
//Interpretation 1:
//4 and 2 -> Odd numbered digits
//4+2=6
//6
//Interpretation 2:
//1 and 3 -> Odd digits
//1+3=4
//4
#include<stdio.h> //Interpretation 2
void main(void)
{
int sumofodddigits(int x); //Function declaration
int n,sum;
printf("Enter a number?");
scanf("%d",&n);
sum=sumofodddigits(n); //Calling the function
printf("Sum of odd digits of %d is %d\n",n,sum);
}
int sumofodddigits(int x) //Function definition
{
int r,total=0,seq=1;
while(x>0)
{
r=x%10; //take out the left most digit
if(seq%2==1) //cheeck if the digit is odd
 total=total+r; //if odd then add it to total
x=x/10; //reduce the number by removing the right most digit
seq++;
}
return total;
}
