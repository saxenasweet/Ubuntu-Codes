#include<iostream>
using namespace std;
class Test
{
int s=0;
public:
Test()
{
cout<<"In constructor "<<s<<endl;
s++;
}
~Test()
{
cout<<"In destructor "<<s<<endl;
s--;
}
};
int main(void)
{
Test t1,t2;
return 0;
}

