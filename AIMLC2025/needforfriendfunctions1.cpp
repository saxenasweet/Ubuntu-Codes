#include<iostream>
using namespace std;
class EX
{
int a,b;
public:
/*
EX(int x,int y)
{
a=x;
b=y;
}
*/
void getdata();
void printdata()
{
cout<<a<<b<<endl;
}
};
void EX::getdata()
{
cin>>a>>b;
};
int main(void)
{
EX e; //EX e(3,4)
e.getdata();
e.printdata();
return 0;
}
