/*
0 or 1 - 1 bit Binary Digit
Bit wise operators work at bit level
7->111
3->011

7&3
111
011
---
011 -> 3
7
3 1
1 1

7|3
111
011
---
111 - >7
3
1 1
AND -> &
OR ->|
1|1->1
1|0->1
0|1->1
0|0->0
1&1->1
1&0->0
0&1->0
0&0->0

7->111
3->011
7^3
111
011
---
100
*/
//Negative numbers are stored by 2's complement in Memory
//-3
//00000011
//1st complement
//11111100
//2nd complement ->Add 1
//11111101 -> -3
#include<stdio.h>
void main(void)
{
int a=9;
int b=3;
printf("%d",a&b);
printf("\n%d",a|b);
printf("\n%d",a^b);
printf("\n%d",a>>1);
printf("\n%d",~a); //Complement Operator
printf("\n%d",a<<1);
}
//Left shift Multiply by 2
//Right shift Divide by 2
/*
1000 >> 1
100 ->4
1000 >> 2
10 ->2
 1000 << 1
10000 ->16
9-7
9+(-7)
*/
