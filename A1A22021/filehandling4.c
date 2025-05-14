#include<stdio.h>
#include<stdlib.h>
void main(void)
{
FILE *fp;
char ch;
fp=fopen("hello.txt","r");
if(fp==NULL)
{
 printf("The file cannot be opened...\n");
 exit(0);
}
/*
while(!feof(fp))
{
ch=fgetc(fp);
printf("%c",ch);
}*/
//fseek(file_pointer,offset,whence) -> Whence: SEEK_CUR, SEEK_SET, SEEK_END
fseek(fp,2,SEEK_SET); //SEEK_SET -> Beginning of the file
ch=fgetc(fp);
printf("%c",ch);
fseek(fp,3,SEEK_CUR); //SEEK_CUR ->From the current file pointer location
ch=fgetc(fp);
printf("%c",ch);
printf("\n");
fclose(fp);
}

