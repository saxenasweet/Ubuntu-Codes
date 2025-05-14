#include<stdio.h>
void main(void)
{
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if((a>=b)&&(a>=c))
 printf("Greatest is %d",a);
else if(b>=c)
        printf("Greatest is %d",b);
       else
           printf("Greatest is %d",c);
}

