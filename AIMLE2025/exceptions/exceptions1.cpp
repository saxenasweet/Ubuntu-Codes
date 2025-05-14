#include<iostream>
using namespace std;
int main(void)
{
try
{
int *p=new int[100000000000000];
cout<<"Memory allocation successful\n";
delete []p;
}
catch(const exception &a)
{
cout<<"Cannot allocate too much memory..Error is "<<a.what()<<endl;
}
}

