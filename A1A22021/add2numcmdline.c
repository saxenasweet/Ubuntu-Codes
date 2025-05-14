#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
int total;
if(argc!=3)
 {
  printf("I expected only 2 arguments...");
  return 0;
 }

total=atoi(argv[1])+atoi(argv[2]);
printf("Sum=%d\n",total);
return 0;
}
