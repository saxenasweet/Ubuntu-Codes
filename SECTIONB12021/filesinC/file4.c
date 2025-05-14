#include<stdio.h>
void main(void)
{
FILE *fp;
fp=fopen("hello.txt","w");
fprintf(fp,"Hello BIT Meerut\n");
fclose(fp);
}

