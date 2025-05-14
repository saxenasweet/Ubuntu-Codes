//Why do we need files?
//Files are needed to store data for a long time on non volatile storage devices such  as Hard Disk, CD, DVD
//Write a code to create a file Hello.txt which stores the message Welcome to BIT.
#include<stdio.h>
void main(void)
{
FILE *fp; //Here fp is a FILE pointer
fp=fopen("Hello.txt","w");
fprintf(fp,"Welcome to BIT");
fclose(fp);
}
//Here file is opened in write mode


