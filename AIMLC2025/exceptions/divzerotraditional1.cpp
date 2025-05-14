#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cin>>a>>b;
try
{
if(b==0)
 throw(1.5);
c=a/b;
cout<<c<<endl;
}
catch(int e)
{
cout<<"\nDivision by zero is not allowed"<<endl;
}
}
