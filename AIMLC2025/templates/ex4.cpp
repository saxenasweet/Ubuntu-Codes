//Class Template
#include<iostream>
using namespace std;
template <class X>
class Demo
{
private:
 X num1,num2;
public:
 Demo(X n1,X n2)
{
 num1=n1;
 num2=n2;
}
void check()
{
if(num1>num2)
{
 cout<<num1<<" is the largest number"<<endl;
}
else
{
 cout<<num2<<" is the largest number"<<endl;
}
}
};
int main()
{
Demo <int> obj1(5,3);
obj1.check();
return 0;
}
