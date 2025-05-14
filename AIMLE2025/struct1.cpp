/*
int a[10]; //Array is a collection of homogeneous data type values
Structure is a collection of hetrogeneous data type values.
How do we use:
Sytax:
struct <structure_name>
{
data_type var_name;
.
.
.
}tagname;
*/
#include<iostream>
using namespace std;
int main(void)
{
struct student
{
int sno; //Fields
float pcmper;
char gender;
}amit,deepak; //Tag name
amit.sno=1;
amit.pcmper=95.5;
amit.gender='M';
deepak.sno=2;
deepak.pcmper=65;
deepak.gender='M';
cout<<amit.sno<<" "<<amit.pcmper<<" "<<amit.gender<<endl;
cout<<deepak.sno<<" " <<deepak.pcmper<<" " <<deepak.gender<<endl;
}

