#include<iostream>
using namespace std;

template<class T>
class Swap
{
T a,b;
public:
void getdata(T x,T y)
{
a = x;
b = y;
cout<<"The numbers before swapping are: "<<a<<" "<<b<<endl;
}
void swap()
{
T t = a;
a = b;
b = t;
cout<<"The numbers after swapping are: "<<a<<" "<<b<<endl;
}
};
int main()
{
Swap <int> S1;
S1.getdata(10,20);
S1.swap();
}
