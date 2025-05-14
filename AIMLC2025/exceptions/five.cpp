#include<iostream>
using namespace std;
int main()
{
try
{
cout<<"I am in try";
throw(1);
}
catch(int e)
{
cout<<"\nfirst catch statement";
}
catch(int f)
{
cout<<"\nAnother catch statement";
}
cout<<"End\n";
}

