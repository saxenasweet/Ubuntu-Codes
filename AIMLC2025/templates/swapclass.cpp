#include<iostream>
using namespace std;
class S
{
private:
int n1,n2;
public:
S(int a,int b)
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
int t;
t=n1;
n1=n2;
n2=t;
cout<<"After swap "<<n1<<" and "<<n2<<endl;
}
};
int main(void)
{
S obj1(3,4);
S obj2(3.3,4.3);
obj1.display();
obj1.swap();
obj2.display();
obj2.swap();
}
