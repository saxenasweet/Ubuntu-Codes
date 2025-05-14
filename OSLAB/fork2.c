#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>
int main()
{
pid_t pid;
  /* fork a child process */
fork();
fork();
fork();
printf("Child Complete\n");
return 0;
}

