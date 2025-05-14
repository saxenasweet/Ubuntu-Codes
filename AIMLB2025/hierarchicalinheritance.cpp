#include<iostream>
using namespace std;
class A
{
public:
int a;
};
class B:public A
{
public:
int b;
};
class C:public A
{
public:
int c;
};
class D:public A
{
public:
int d;
D(int e,int f)
{
a=e;
d=f;
}
void display()
{
cout<<a<<" "<<d<<endl;
}
};
int main(void)
{
D dd(1,2);
dd.display();
}
