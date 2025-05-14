#include<stdio.h>
void main(void)
{
float bt[20],avgwt=0,totwt=0,ptwt=0;
int n,loop;
printf("Please enter number of processes?");
scanf("%d",&n);
for(loop=0;loop<n;loop++)
{
printf("Please enter CPU Burst Time for Process P%d?",loop);
scanf("%f",&bt[loop]);
}
for(loop=0;loop<n-1;loop++)
{ 
 totwt+=bt[loop];
 ptwt+=totwt;
}
avgwt=ptwt/n;
printf("The average waiting time calculated is %f\n",avgwt);
}
