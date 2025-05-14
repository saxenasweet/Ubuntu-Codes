//Use a function template to swap 2 numbers
#include<iostream>
using namespace std;
template <class T>
T nswap(T a,T b)
{
T t;
t=a;
a=b;
b=t;
cout<<"Swapped values are "<<a<<" and "<<b<<endl;
return t;
}
int main(void)
{
//int x,y;
//cin>>x>>y;
nswap(3.3,4.3);
return 0;
}
