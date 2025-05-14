#include<stdio.h>
void main(void)
{
struct cricket
{
char teamname[50];
struct player
{
char name[30];
float battingavg;
}p1[10];
}india[5];
int i,o;
for(o=0;o<5;o++)
{
printf("Enter team name?");
gets(india[o].teamname);
for(i=0;i<10;i++)
{
printf("Enter player name?");
gets(india[o].p1[i].name);
printf("Enter batting average?");
scanf("%f",&india[o].p1[i].battingavg);
}
}
for(o=0;o<5;o++)
{
printf("Team name: %s\n",india[o].teamname);
for(i=0;i<10;i++)
{
printf("Player name:%s\n",india[o].p1[i].name);
printf("Batting Average:%f\n",india[o].p1[i].battingavg);
}
}
}

