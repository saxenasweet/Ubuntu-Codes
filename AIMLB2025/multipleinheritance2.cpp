#include<iostream>
using namespace std;
class A
{
public:
int a;
~A()
{
cout<<"In A\n";
}
};
class B
{
public:
int b;
~B()
{
cout<<"In B\n";
}
};
class C:public B,public A
{
public:
int c;
~C()
{
cout<<"In C\n";
}
void display()
{
cout<<a<<" "<<b<<" "<<c<<endl;
}
};

int main(void)
{
C CC;
return 0;
}
