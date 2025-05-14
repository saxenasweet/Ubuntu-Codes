#define MAX 25
#include<stdio.h>
void main(void)
{
int frame[MAX],page,numframes,filledframes=0,freeloc=0,loop,length,loop2;
static int hit,miss;
int flag=0;
printf("Enter the length of reference string?");
scanf("%d",&length);
printf("Enter the number of frames?");
scanf("%d",&numframes);
//Fill all the frames with -1
for(loop=0;loop<numframes;loop++)
 frame[loop]=-1;
while(length>0)
{
printf("Enter the page number?");
scanf("%d",&page);
//Check if this page is in memory
for(loop2=0;loop2<numframes;loop2++)
{
if(frame[loop2]==page)
{
printf("HIT...\n");
hit++;
flag=1;
break;
}
}
if(flag==0)
{
printf("MISS...\n");
miss++;
//Check if the frames are full...
//Evict a page so that one frame is free
frame[freeloc]=page;
freeloc=(freeloc+1)%numframes;
filledframes++;
}
flag=0;
length--;
printf("Length Remaining=%d\n",length);
}
printf("Number of HITS = %d and Number of MISS = %d\n",hit,miss);
}


