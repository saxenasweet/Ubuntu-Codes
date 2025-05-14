#include<stdio.h>
void main(void)
{
int search(int *p,int number);
int arr[10];
int n;
int tosearch;
for(n=0;n<10;n++)
scanf("%d",&arr[n]);
printf("What do you want me to search?");
scanf("%d",&tosearch);
printf("the frequency of %d is %d\n",tosearch,search(&arr[0],tosearch));
}
int search(int *p,int number)
{
int l,freq=0;
for(l=0;l<10;l++,p++)
{
if(*p==number)
 freq++;
}
return freq;
}

