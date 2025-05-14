#include<stdio.h>
void main(void)
{
int a[10]={1,2,3,3,5,6,7,8,8,11};
int beg=0,end=9,mid;
int number,flag=0;
/*
int loop;
for(loop=0;loop<10;loop++)
 scanf("%d",&a[loop]);
*/
printf("Enter what number you want me to search?");
scanf("%d",&number);
while(end>=beg)
{
mid=(beg+end)/2;
if(a[mid]==number)
{
 printf("Number found at location %d\n",mid);
 flag=1;
 break;
}
else
if(a[mid]>number)
  end=mid-1;
else
  beg=mid+1;
}
if(flag==0)
 printf("Number not in the list\n");
}

