#include<iostream>
using namespace std;
class a
{
protected:
int a;
};
class b:public a
{
protected:
int b;
};
class d:public b
{
public:
int c;
d(int a,int b,int c)
{
this->a=a;
this->b=b;
this->c=c;
}
void display(void)
{
cout<<a<<" "<<b<<" "<<c<<endl;
}
};
int main(void)
{
d CC(1,2,3);
CC.display();
return 0;
}
