/*
structure
Structure is a collection of hetogeneous data types
Syntax:
struct student //Name of the structure
{
int sno; //Fields
float pcmper;
char gender;
}
int sno;
float pcmper;
char gender;
*/
#include<iostream>
using namespace std;
int main(void)
{
struct student
{
int sno;
float pcmper;
char gender;
}amit; //Tagname
//Total memory allocated=9 bytes
cin>>amit.sno;
cin>>amit.pcmper;
cin>>amit.gender;
cout<<amit.sno<<" "<<amit.pcmper<<" "<<amit.gender<<endl;
}
