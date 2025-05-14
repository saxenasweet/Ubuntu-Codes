#include<iostream>
using namespace std;
int main(void)
{
struct student
{
int sno;
float pcmper;
char myfname[30];
char gender;
}aimla[50];
int loop;
for(loop=0;loop<2;loop++)
{
cout<<"Record Number: "<<loop+1<<endl;
cin>>aimla[loop].sno;
cin>>aimla[loop].pcmper;
cin>>aimla[loop].myfname;
cin>>aimla[loop].gender;
}
cout<<"Displaying the records..."<<endl;
for(loop=0;loop<2;loop++)
cout<<aimla[loop].sno<<" "<<aimla[looDDp].pcmper<<" "<<aimla[loop].myfname<<" "<<aimla[loop].gender<<endl;
}

