#include<stdio.h>
#define SQUARE(a) a*a
#define CUBE(a) SQUARE(a)*a //Nested Macro
int main(void)
{
int a;
scanf("%d",&a);
printf("%d and %d\n",SQUARE(a),CUBE(a));
return 0;
}
