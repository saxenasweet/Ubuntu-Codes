#include<iostream>
using namespace std;
int main(void)
{
struct student //userdefined datatype
{
int sno;
char gender;
float pcmper;
}a[50]; //Array of structures
int l;
for(l=0;l<2;l++)
{
cin>>a[l].sno;
cin>>a[l].gender;
cin>>a[l].pcmper;
}
for(l=0;l<2;l++)
cout<<a[l].sno<<" "<<a[l].gender<<" "<<a[l].pcmper<<endl;
}
/*
Syntax:
struct <structure_name>
{
data_type Var_name;
.
.
}tagname;
*/
