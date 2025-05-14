#include<iostream>
using namespace std;
int main(void)
{
struct emp
{
int empn;
float salary;
char gender;
}e[3];
//Array of structure
int loop;
for(loop=0;loop<2;loop++)
{
cin>>e[loop].empn;
cin>>e[loop].salary;
cin>>e[loop].gender;
}
cout<<"Data entered is"<<endl;
for(loop=0;loop<2;loop++)
cout<<e[loop].empn<<" "<<e[loop].salary<<" "<<e[loop].gender<<endl;
}

