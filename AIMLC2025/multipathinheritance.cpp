#include<iostream>
using namespace std;
class A
{
public:
int a;
void displaya()
{
cout<<"The value of a is: "<<a<<endl;
}
};
class B: virtual public A
{
public:
int b;
void displayb()
{
cout<<"The value of b is: "<<b<<endl;
}
};
class D: virtual public A
{
public:
int d;
void displayd()
{
cout<<"The value of d is: "<<d<<endl;
}
};
class C: public B,public D
{
public:
int c;
C(int a,int b,int d,int c)
{
this->a=a;
this->b=b;
this->d=d;
this->c=c;
}
void displayc()
{
cout<<"The value of c is: "<<c<<endl;
}
};
int main(void)
{
C cc(1,2,4,3);
cc.displayc();
cc.displaya();
cc.displayb();
cc.displayd();
return 0;
}

