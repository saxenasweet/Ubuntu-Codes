/*Binary Search
-> List should be sorted
1 2 3 4 5 6 7 8 9 10
4->to search
First=0
Last=9
Mid=(First+Last)/2=4
a[mid]=5
First=0
Last=Mid=4
Mid=2
a[mid]=3
First=Mid=2
Last=4
Mid=3
a[mid]=a[3]=4

1 2 3 4 4 6 8 8 9 10
7->to search
First=0
Last=9
Mid=4
a[mid]=a[4]=4
first=mid=4
last=9
mid=6
a[mid]=a[6]=8
first=4
last=6
mid=5
a[mid]=a[5]=6
first=6
last=6
mid=6
a[mid]=8
Number does not exist
*/
#include<stdio.h>
void main(void)
{
int a[10],num;
int first=0,mid,last=9;
int count;
for(count=0;count<10;count++)
 scanf("%d",&a[count]);
printf("Enter a number you want me to search?");
scanf("%d",&num);
while(first<=last)
{
mid=(first+last)/2;
if(a[mid]==num)
{
 printf("Number found at location %d\n",mid);
 break;
}
if(a[mid]>num)
 first=mid;
else
 last=mid;
}
}
