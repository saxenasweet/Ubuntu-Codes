/*
"BIT" -Ex 1 1 -D
"BIT" - Ex 2 2-D
"MEERUT"

"BIT", "MEERUT"
1-D
st[30] - 1 -D
st[3][30] - 2 - D
st[0] - 1st string
st[1] - 2nd string
st[2] - 3rd string
st[0][1] - Second char of 1st string
*/
#include<stdio.h>
void main(void)
{//C does not do bound chacking
char digits[10][6]={"zero","one","two","three","four","five","six","seven","eight","nine"};
char num[6];
int d,ac;
printf("Enter a number you want me to print in words?");
scanf("%s",num);
for(d=0;num[d]!='\x0';d++)
{
ac=num[d]-48; //num[d] will give a character and when subracted from 48 will give a number
printf("%s ",digits[ac]); //from 0 to 9
}
}

