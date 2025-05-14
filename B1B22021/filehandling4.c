#include<stdio.h>
void main(void)
{
FILE *fp;
fp=fopen("mydetail.txt","w+");
fputs("HELLO",fp);
fseek(fp,3,SEEK_SET);
fputs("TOW",fp);
fclose(fp);
}
//The File mydetail.txt has  HELTOW in it.
//fseek can move the file pointer any where in the file we want.
//fseek takes three parameters/arguments - 
//1.file pointer
//2.number of bytes to move
//3. whence - it can either be SEEK_SET: begining of the file
//SEEK_CUR : from where the file pointer is presently pointing to
//SEEK_END : from the end of the file
