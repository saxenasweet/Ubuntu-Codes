#include<iostream>
using namespace std;
int main()
{
int i;
cin>>i;
cout<<"Welcome";
try
{
if(i==0)
throw;
if(i==1)
throw 1;
if(i==2)
throw "hello";
if(i==3)
throw 4.5;
cout<<"In Try Block";
}
catch(int e)
{
cout<<"Integer exception handled "<<e<<endl;
}
catch(double f)
{
cout<<"Float exception handled "<<f<<endl;
}
catch(const char *p)
{
cout<<"String exception handled "<<p<<endl;
}
catch(...)
{
cout<<"\nException";
}
cout<<"\nThe end";
return(0);
}
