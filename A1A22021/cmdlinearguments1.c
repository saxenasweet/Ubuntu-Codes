#include<stdio.h>
void main(int argc,char *argv[]) //argc - argument count 
//*argv[] - pointer to an array -> 2 dimensional string
{
printf("total arguments are %d\n",argc);
printf("the arguments are :\n");
for(int i=0;i<argc;i++)
printf("%s\n",argv[i]);
}

