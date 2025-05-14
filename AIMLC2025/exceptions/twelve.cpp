#include<iostream>
using namespace std;
//Not handling exceptions
int main()
{
int i = 3;
cout<<"Welcome";
try
{
if(i==3)
throw;
}
catch(int) //This is the problem
{
cout<<"\nException";
}
cout<<"\nThe end";
return(0);
}
