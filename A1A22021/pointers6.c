#include<stdio.h>
#include<stdlib.h>
void main(void)
{
int *p;
int l;
int n;
printf("Enter how many numbers you want to enter?");
scanf("%d",&n);
p=(int *)calloc(n,sizeof(int));
if(p==NULL) //Memeory allocation failed
 exit(0);
//p=(int *)malloc(n*sizeof(int))
//malloc will return contiguous memory 
//calloc may return non contiguous memory 
//malloc will not initialize the memory allocated
//calloc will always initialize the memory allocated
for(l=0;l<n;l++,p++)
scanf("%d",p);
p--;
for(l=0;l<n;l++,p--)
printf("%d ",*p);
p++; 
//p is pointing  to the first int
printf("How many numbers you want me to reallocate memory?");
scanf("%d",&n);
p=(int *)realloc(p,(n*sizeof(int))); //p will point to the first memory address reallocated
printf("Memory successfully reallocated...\n");
free(p);
}

