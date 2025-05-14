//Write a code to compute the size of the file
#include<stdio.h>
void main(void)
{
FILE *fp;
int s;
fp=fopen("newfile.txt","r");
fseek(fp,0,SEEK_END); //takes the file pointer to the end of the file
s=ftell(fp); //store in s where the file pointer location is
fclose(fp);
printf("The size of the file is %d bytes\n",s);
}

