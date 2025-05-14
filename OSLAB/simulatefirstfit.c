//AIM-Simulate First Fit Memory Allocation Algorithm
#include<stdio.h>
#define MAX 20
void main(void)
{
int PS[MAX],PART[MAX];
static int FREESP[MAX];
int nump,numpart;
int loop,loop1,flag=0;
printf("Enter the total number of Memory Partitions?");
scanf("%d",&numpart);
printf("Enter the total number of processes?");
scanf("%d",&nump);
printf("Now enter the size of each memory partition..\n");
for(loop=0;loop<numpart;loop++)
{
printf("Size of Partition %d?",loop);
scanf("%d",&PART[loop]);
}
printf("Now enter the size of each process one by one...\n");
for(loop=0;loop<nump;loop++)
{
printf("Enter the size of process P%d?",loop);
scanf("%d",&PS[loop]);
//Lets see in which partition this process fits in
for(loop1=0;loop1<numpart;loop1++)
{
if((PART[loop1]>=PS[loop])&&(FREESP[loop1]==0))
{
printf("Process P%d is allocated Partition %d\n",loop,loop1);
FREESP[loop1]=PART[loop1]-PS[loop];
flag=1;
}
if(flag==1)
 break;
}
if(flag==0)
 printf("Process P%d cannot be allocated any partition\n",loop);
flag=0;
}
for(loop=0;loop<numpart;loop++)
{
if(FREESP[loop]!=0)
 printf("Partition %d has a hole of %d Size\n",loop,FREESP[loop]);
else
 printf("Partition %d is unallocated\n",loop);
}
}
