//Random Access - fseek, ftell , rewind
#include<stdio.h>
void main(void)
{
FILE *fp;
char c;
fp=fopen("newfile.txt","w+"); //opening the file in write and read mode
fputs("Hello World",fp); //Writes Hello World to the file newfile.txt
fseek(fp,6,SEEK_SET); //SEEK_SET takes the file pointer ahead by 6 bytes from the beginning of the file
fputs("BIT Meerut",fp); //Overwrites World with BIT Meerut
fseek(fp,-3,SEEK_END); //Print 'r'
c=fgetc(fp);
printf("%c\n",c);//Prints 'r'
fseek(fp,1,SEEK_CUR);//Currently the file pointer is at 'u'->moves the file pointer ahead by 1 byte 
c=fgetc(fp);
printf("%c\n",c); //Prints 't'
rewind(fp); //Take the file pointer to the beginning of the file
c=fgetc(fp);
printf("%c\n",c); //Prints 'H' - the first character stored in the file
fclose(fp);
}

