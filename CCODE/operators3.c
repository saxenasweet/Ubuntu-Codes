//Bit-wise operators
// &  AND
// | OR
// ~ NOT
// ^ XOR
// << Left shift  
// >> Right shift

#include<stdio.h>
void main(void)
{
int a,b,c;
a=5; // 5 is in Decimal Number System (Deci means 10 digits from 0 to 9) Binary of 5 -
b=3; //Binary -0 or 1
/*
5->base 10 also known as Decimal Number System
Convert it to Binary Number System
5/2 -> 1
2/2  ->0
1
5-> 101

11-> base 10 -> ? base 2
11/2 -> 1
5/2 -> 1
2/2 -> 0
1
11 ->1011 in base 2

3 in binary
3/2 ->1
1

3 in binary is 11
*/
c=a&b;
/*
101 -> 5
011  ->3
_____ AND
001 -> 1
_____
*/
printf("%d\n",c);
a=11;//1011 
b=6; //0110
//2     0010 Bitwise AND
//          
/*
How to convert a binary number to decimal
e.g. 1011 -> is in binary
What is the value in Decimal
MSB  1 0 1 1 (LSB)
     3 2 1 0
    2 2 2 2
    8+0+2+1 = 11
11/2 ->1
5/2  ->1
2/2  ->0
1

6/2 ->0
3/2 ->1
1*/
c=a&b;
printf("\n%d",c);
}
