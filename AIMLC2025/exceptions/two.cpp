#include<iostream>
using namespace std;
int main()
{
cout<<"Welcome";
try
{
throw 10;
cout<<"In Try Block"; //Will not get printed
}
catch(int e)
{
cout<<"\nException:"<<e;
}
cout<<"\nThe end"; //Will get printed
return(0);
}
