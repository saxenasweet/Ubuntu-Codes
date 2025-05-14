#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
void main(int argc, char *argv[])
{
int total=0;
printf("Total number of arguments are %d\n",argc);
for(int i=1;i<argc;i++)
total+=atoi(argv[i]);//printf("%s\n",argv[i]);
printf("\nResult=%d\n",total);
}
