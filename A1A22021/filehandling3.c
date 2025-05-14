#include<stdio.h>
#include<stdlib.h>
void main(void)
{
FILE *f;
f=fopen("WELCOME.TXT","a"); 
char st[30];
if(f==NULL)
{
printf("File cannot be opened\n");
exit(0);
}
else
printf("File has been opened for writing..\n");
printf("Enter a string you want me to write to the file?");
scanf("%s",st);
fprintf(f,"%s",st);
fclose(f);
}

