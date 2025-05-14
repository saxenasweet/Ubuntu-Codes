#include<iostream>
using namespace std;
class EX
{
private:
int a;
int b;
public:
EX(int x,int y)
{
a=x;
b=y;
};
/*void getdata()
{
cin>>a>>b;
};*/
void printdata()
{
cout<<a<<" "<<b<<endl;
};
};
int main(void)
{
EX e(1,2);
//e.getdata();
e.printdata();
}

