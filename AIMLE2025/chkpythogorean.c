#include<stdio.h>
void main(void)
{
int a,b,c;
int g,f;
int pyth(int,int,int);
scanf("%d %d %d",&a,&b,&c);
if((a>b)&&(a>c))
 f=pyth(b,c,a); 
else if(b>c)
 f=pyth(a,c,b);
else 
 f=pyth(a,b,c);
//Find the greatest number
if(f==1)
 printf("Pythogorean Triplet\n");
else
 printf("Not a Pythagorean Triplet\n");
}
int pyth(int x,int y,int z)
{
if((z*z)==((x*x)+(y*y)))
 return 1;
else
 return 0;
}

