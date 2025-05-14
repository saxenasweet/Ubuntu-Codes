#include<stdio.h>
#include<math.h>
void main(void)
{
float y;
float i=0;
int range=0;
Label:
y=exp(i);
//printf("\ny=%f and i=%f\n",y,i);
//plot the graph
for(range =0;range<=y;range=range+1)
{
printf(" ");
}
printf("*");
printf("\n");
i=i+0.25;
if(i<=4) goto Label; 
}

