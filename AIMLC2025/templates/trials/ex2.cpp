#include<iostream>
using namespace std;
template <class T>
T sum(T a,T b)
{
cout<<"The sum is: "<<a+b<<endl;
//return a+b;
}
int main()
{
sum(3.2,4.5);
sum(3,4);
return 0;
}

