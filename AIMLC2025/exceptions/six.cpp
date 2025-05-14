#include<iostream>
using namespace std;
int main()
{
int i;
cin>>i;
cout<<"Welcome";
try
{
if(i==1)
throw 1;
if(i==2)
throw 2;
if(i==3)
throw 3;
if(i==4)
throw(1.2);
cout<<"In Try Block";
}
catch(int e)
{
cout<<"Exception number "<<e<<endl;
}
catch(...) //Catch all exceptions
{
cout<<"\nException: ";
}
cout<<"\nThe end";
return(0);
}
