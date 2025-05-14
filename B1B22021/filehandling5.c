#include<stdio.h>
void main(void)
{
FILE *fp;
int total;
fp=fopen("greet.txt","w+");
fputs("hello world!",fp);
total=ftell(fp);
printf("There are %d bytes in the file\n",total);
fseek(fp,0,SEEK_END); //rewind(fp); Goto beginning of the file
total=ftell(fp);
printf("I am at location %d\n",total);
fclose(fp);
}
//ftell is a function which tells us the location of the file pointer
