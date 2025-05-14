#include<stdio.h>
void main(void)
{
int a[6]={1,2,3,4,5,6};
int n=6;
int loc=2;
int loop;
//To delete a number from location loc, move number from location
//loc+1 to loc and so on 
for(loop=loc+1;loop<n;loop++)
a[loop-1]=a[loop];
n--; //One number has been deleted
printf("\nThe list with one deleted element is:");
for(loop=0;loop<n;loop++)
printf("%d ",a[loop]);
}
