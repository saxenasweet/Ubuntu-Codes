#include<iostream>
using namespace std;
int main()
{
float p,r,t,si;
cin>>p>>r>>t;
try
{
if((p<=0)||(r<=0)||(t<=0))
 throw(1);
si=p*r*t/100;
cout<<si;
}
catch(int e)
{
cout<<"\nInvalid input\n";
}
}
