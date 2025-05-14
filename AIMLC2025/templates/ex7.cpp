#include<iostream>
using namespace std;
//constructor in template class
template<class T>
class Example
{
T a,b;
public:
Example(T x, T y)
{
a = x;
b = y;
}
void display()
{
cout<<a<<" "<<b<<endl;
}
};
int main()
{
Example <int> E1(10,20);
E1.display();
}
