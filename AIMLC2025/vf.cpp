#include<iostream>
using namespace std;
class b //Base Class
{
public:
//virtual void show()=0;  -> Pure virtual function
virtual void show()
{
cout<<"In base class\n";
}
};
class d:public b //Derived Class
{
public:
void show()
{
cout<<"In derived class\n";
}
};
int main(void)
{
b *p; //p is a pointer to the base class b
d dd;// create an object dd of derived class d
p=&dd;//make p point to derived class object dd
p->show(); //call the show() function and since show is virtual
return 0;//in base class, the show() function of derived class is
}//called.

