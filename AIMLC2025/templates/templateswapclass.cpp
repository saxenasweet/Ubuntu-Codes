#include<iostream>
using namespace std;
template <class T>
class S
{
private:
T n1,n2;
public:
S(T a,T b)
{
n1=a;
n2=b;
}
void display()
{
cout<<"Before swap "<<n1<<" and "<<n2<<endl;
}
void swap()
{
T t;
t=n1;
n1=n2;
n2=t;
cout<<"After swap "<<n1<<" and "<<n2<<endl;
}
};
int main(void)
{
S <int> obj1(3,4);
S <float> obj2(3.3f,4.3f);
obj1.display();
obj1.swap();
obj2.display();
obj2.swap();
}
