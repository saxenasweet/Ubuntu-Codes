#include<iostream>
using namespace std;
int main(void)
{
try
{
int *p = new int[10000000000];
cout<<"Memory alocation successful\n";
delete []p;
}
catch(const exception &s)
{
cout<<s.what();
}
}
