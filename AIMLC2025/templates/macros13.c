#include<stdio.h>
#define SQUARE(x) x*x //Nested Macros->macro within a macro
#define CUBE(x) SQUARE(x)*x
int main(void)
{
int a;
scanf("%d",&a);
printf("%d %d\n",SQUARE(a),CUBE(a));
return 0;
}
