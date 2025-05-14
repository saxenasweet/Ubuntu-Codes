#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"Enter the two numbers: ";
cin>>a>>b;
try
{
if(b==0)
 throw 0;
cout<<"\nThe division is: "<<a/b;
}
catch(int e)
{
cout<<"\nDivision is not Possible";
}
cout<<"\nHi";
}
