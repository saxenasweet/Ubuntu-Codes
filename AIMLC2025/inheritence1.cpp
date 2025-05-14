//single level inheritance ->single base class, single derived class
#include<iostream>
using namespace std;
class human //Base Class aka Parent Class
{
protected:
string name;
};
class student:private human //Child Class aka Derived Class
{
private:
int rollno;
int fees;
public:
student(string n,int r,int f) //Parametrized constructor
{
name=n;
rollno=r;
fees=f;
}
void display()
{
cout<<"My name is "<<name<<" and my roll no and fees are "<<rollno<<" "<<fees;
}
};
int main(void)
{
student a("Kshitiz",1,350000);
a.display();
return 0;
}
