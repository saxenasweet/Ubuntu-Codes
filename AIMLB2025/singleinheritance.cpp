#include<iostream>
using namespace std;
class a
{
public:
int x;
};
class b:public a
{
public:
int y;
b(int c,int d)
{
x=c;
y=d;
}
void display()
{
cout<<x<<" "<<y<<endl;
}
};
int main(void)
{
b bb(3,4);
bb.display();
return 0;
}
