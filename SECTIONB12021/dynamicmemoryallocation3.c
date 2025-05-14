#include<stdio.h>
#include<stdlib.h>
void main(void)
{
int n;
char *st;
char d;
int loop;
printf("Enter how many characters you wish to enter?");
scanf("%d",&n);
st=(char *)calloc(n,sizeof(char)); //What is the guarantee that memory is allocated??
if(st==NULL) // Memory requested is not available
 {
  printf("\nMemory allocation failed...exiting\n");
  exit(0); //Function to terminate the program immediately
 }
scanf("%c",&d);
printf("Enter the string?");
scanf("%[^\n]s",st);
printf("\nThe string entered is %s\n",st);
printf("Now enter how many characters you want to enter for the string?");
scanf("%d",&n);
//Now I will reallocate memory
st=realloc(st,n*sizeof(char)); //reallocate memory for n characters
scanf("%c",&d);
printf("Enter the string?");
scanf("%[^\n]s",st);
printf("\nThe string now entered is %s\n",st);
}


