#include<stdio.h>
#define MAX 20
void main(void)
{
int PS[MAX],PART[MAX],PARTNO[MAX];
static int FREESP[MAX];
int nump,numpart,temp,temp1;
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
PARTNO[loop]=loop;
}
for(loop=0;loop<numpart;loop++)
 printf("Partition Number %d has size %d\n",loop,PART[loop]);
//Lets sort the Partitions on the basis of their size
for(loop=0;loop<numpart;loop++)
{
for(loop1=loop+1;loop1<numpart;loop1++)
{
if(PART[loop]>PART[loop1]) //Swap
{
temp=PART[loop];
PART[loop]=PART[loop1];
PART[loop1]=temp;
temp1=PARTNO[loop];
PARTNO[loop]=PARTNO[loop1];
PARTNO[loop1]=temp1;
}
}
}
//Lets print the partitions in a sorted order
for(loop=0;loop<numpart;loop++)
 printf("Partition Number %d Size %d\n",PARTNO[loop],PART[loop]);
//Now that we have sorted the partitions lets ask for Process Sizes
printf("Now enter the size of each process one by one...\n");
for(loop=0;loop<nump;loop++)
{
printf("Enter the size of process P%d?",loop);
scanf("%d",&PS[loop]);
//Lets see in which partition this process best fits in
for(loop1=0;loop1<numpart;loop1++)
{
if((PART[loop1]>=PS[loop])&&(FREESP[loop1]==0))
{
printf("Process P%d is allocated Partition %d\n",loop,PARTNO[loop1]);
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
}
