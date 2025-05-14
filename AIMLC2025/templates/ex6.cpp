#include<iostream>
using namespace std;

template<class T>
class Sum
{
T a,b;
public:
void getdata(T x,T y)
{
a = x;
b = y;
cout<<a<<" "<<b<<endl;
}
T add()
{
T t = a+b;
return(t);
}
};
int main()
{
Sum <int> S1;
S1.getdata(10,20);
int r1 = S1.add();
cout<<r1<<endl;
}
