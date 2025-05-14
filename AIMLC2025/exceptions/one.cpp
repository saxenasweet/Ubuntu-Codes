#include<iostream>
using namespace std;
int main()
{
try
{
cout<<"Hello\n";
throw(0);
}
catch(int e)
{
cout<<"\nException Handled"<<endl;
}
}
