#include<iostream>
using namespace std;
class a
{
public:
virtual void display()
{
cout<<"Hi A"<<endl;
}
};
class b:public a
{
public:
void display()
{
cout<<"Hi B"<<endl;
}
};
int main(void)
{
a *p;
b bb;
p=&bb;
p->display();
return 0;
}
