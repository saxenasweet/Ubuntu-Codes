#include<stdio.h>
void main(void)
{
int fact(int r);
int f;
scanf("%d",&f);
printf("The factorial of %d is %d\n",f,fact(f));
}
int fact(int r)
{
int t=1;
int loop;
for(loop=1;loop<=r;loop++)
 t=t*loop;
return t;
}

