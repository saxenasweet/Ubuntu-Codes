//ASCII - 
//American Standard Code for Information Interchange
//7 bit ->128 symbols
//8 bit ->256 symbols - EBCDIC
//Extended Binary Coded Decimal Interchange Code
//UNICODE - 4 bytes
//xxxxxxx
//1 1 1 1 1 1 1
//
//A - 65
//a - 97
//blank space - 32
//0 - 48
//1 - 49
#include<stdio.h>
void main(void)
{
int a;
for(a=65;a<=90;a++) //For printing alphabets in upper case
 printf("%d->%c\n",a,a); //Implicit Data Type Conversion
for(a=97;a<=122;a++) //For printing alphabets in lower case
 printf("%d->%c\n",a,a);
for(a=48;a<=57;a++) //For printing digits from 0 to 9
 printf("%d->%c\n",a,a); //0 '0' 0.000000
}
