#include<iostream>
using namespace std;
//One base class and one derived class -> Single level inheritance
class human //Base Class aka Parent Class
{
protected:
string name;
};
class student:public human //Derived Class aka Child Class
{
int roll;
int fees;
public:
student(string n,int r,int f)
{
name=n;
roll=r;
fees=f;
}
void display()
{
cout<<"My name is "<<name<<" and my roll num and fees are"<<roll<<" "<<fees<<endl;
}
};
int main(void)
{
student s("Ravi",1,350000);
s.display();
return 0;
}

