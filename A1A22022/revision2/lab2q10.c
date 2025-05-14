#include<stdio.h>
#include<math.h>
void main(void)
{
float x,n;
float loop;
float fact,f;
float sum=1;
int p=-1;
scanf("%f %f",&x,&n);
for(loop=1;loop<=n;loop++)
{
for(fact=1,f=1;fact<=loop;fact++)
 f=f*fact;
sum=sum+(pow(x,loop)/f)*p;
p=p*(-1);
}
printf("Sum of series=%f\n",sum);
}


