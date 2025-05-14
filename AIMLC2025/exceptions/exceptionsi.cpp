#include<iostream>
using namespace std;
int main()
{
float p,r,t,si;
cout<<"Enter values? ";
cin>>p>>r>>t;
try
{
if((p<=0)||(r<=0)||(t<=0))
 throw 0;
si=(p*r*t)/100;
cout<<"\nThe division is: "<<si;
}
catch(int e)
{
cout<<"\nIncorrect inputs";
}
cout<<"\nHi";
}
