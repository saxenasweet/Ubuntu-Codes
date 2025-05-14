#include<iostream>
using namespace std;
class e
{
private:
int a,b;
public:
int c,d;
void setdata(int a1,int b1)
{
a=a1;
b=b1;
}
void getdata(void)
{
cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
}
};
int main(void)
{
class e e1;
e1.setdata(1,2);
e1.c=3;
e1.d=4;
e1.getdata();
}
