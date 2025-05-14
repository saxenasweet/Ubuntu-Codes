/*
File is a collection of  records.
A record is a collection of field values.
A field is a given data type value.

There are two file access mechanisms -
Sequential Access - start reading/writing to a file from the begining->Slow access
Random Access - read/write anywhere in the file->Fast access
*/
#include<stdio.h>
void main(void)
{
FILE *fp;
fp=fopen("greeting.txt","a");
fputs("WE ARE AWESOME",fp);
fputs("\n",fp);
fclose(fp);
}


