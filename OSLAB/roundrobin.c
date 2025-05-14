#include<stdio.h>
void main(void)
{
int at[20],bt[20],wq[20],btwq[20],atat=0,awt=0,nqt=0,ct=0;
int tq,flag=1,ft=0,count=0,temp,fpwq=0,lpwq=0;
int loop,n,smallest=0,loop1,loop2=0;
printf("Simulating Round Robin CPU Scheduling Algorithm..");
printf("\nEnter Time Quantum?");
scanf("%d",&tq);
printf("\nEnter Number of Processes?");
scanf("%d",&n);
for(loop=0;loop<n;loop++)
{
printf("Enter Arrival Time for Process[%d]?",loop);
scanf("%d",&at[loop]);
printf("Enter Burst Time for Process[%d]?",loop);
scanf("%d",&bt[loop]);
}
smallest=at[0];
loop=0;
for(loop1=0;loop1<n;loop1++)
{
if(smallest>at[loop1])
{
 smallest=at[loop1];
 loop2=loop1;
}
}
while(flag)
{
printf("\nThe Process %d is first and now put in Ready Queue..",loop2);
nqt=bt[loop2]-tq;
wq[count]=loop2;
count++;
if(nqt<0)
{
 nqt=bt[loop2];
 ct+=bt[loop2];
}
else
{
 nqt=tq;
 ct+=tq;
}
wq[count]=0; //Because the process is running now...
count--; //Because the process is no more in the ready queue
printf("\nExecuting it ...for %d time",nqt);
scanf("%d",&temp);
bt[loop2]-=tq;
if(bt[loop2]<0)
{
 bt[loop2]=0;
 printf("\nProcess %d terminates...",loop2);
}
else
{
 printf("\nPut the running process in ready queue if it hasnt ended..");
 printf("\nBefore that Check if any other process has arrived...");
 for(temp=0;temp<n;temp++)
 {
 if((at[temp]<=ct)&&(bt[temp]!=0)) 
 { 
  wq[count]=temp;
  count++;
 }
 wq[count]=loop2;
}
printf("\nTime Quantum Over...");
printf("\nNow choose the first process from the ready queue..");
loop2=wq[0];
//Check if all processes have finished...
for(temp=0;temp<n;temp++)
{
 if(bt[temp]>0)
  flag=1;
}
}
printf("Round Robin CPU Scheduling Algorithm Implementation completed..");
}
}
