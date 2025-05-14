#include<iostream>
using namespace std;
int main()
{
cout<<"Welcome";
try
{
throw 10;
cout<<"In Try Block";
}
catch(double e)
{
cout<<"\nException:"<<e;
}
cout<<"\nThe end";
return(0);
}
