#include<iostream>
using namespace std;
class fr
{
private:
int a,b,c;
public:
int d;
void getdata(int a1,int b1,int c1);
void printdata(void)
{
cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
}
};
void fr::getdata(int a1,int b1,int c1)
{
a=a1;
b=b1;
c=c1;
}
int main(void)
{
class fr f;
f.getdata(1,2,3);
f.d=4;
f.printdata();
return 0;
}
