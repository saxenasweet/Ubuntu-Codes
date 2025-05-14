#include<stdio.h>
#include<string.h>
void main(void)
{
char ch;
char friendtosearch[30];
int flag=0;
struct telephonedirectory
{
char friendname[30];
char mobilenumber[15];
}myfriends[5]; //Array of structures
int loop;
for(loop=0;loop<5;loop++)
{
printf("Record number %d:\n",loop+1);
printf("Friend name?");
scanf("%[^\n]s",myfriends[loop].friendname);
printf("Mobile number?");
scanf("%s",myfriends[loop].mobilenumber);
scanf("%c",&ch); 
}
printf("Enter friend's name you want to search?");
scanf("%[^\n]s",friendtosearch);
for(loop=0;loop<5;loop++)
{
if(strcmp(friendtosearch,myfriends[loop].friendname)==0) //strcmp is a function to compare two strings, it returns 0 if both strings are same
{
printf("%s\t%s\n",myfriends[loop].friendname,myfriends[loop].mobilenumber);
flag=1;
}
}
if(flag==0)
 printf("Name not in the list");
}

