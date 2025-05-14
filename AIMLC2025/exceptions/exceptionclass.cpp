#include<iostream>
using namespace std;
int main(void)
{
try
{
int *a=new int [10000000000000000];
cout<<"Memory allocation successful"<<endl;
delete []a; //Release memory
}
catch(const exception &s)
{
cout<<"Exception handled "<<s.what();
}
return 0;
}


