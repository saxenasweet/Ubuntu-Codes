#include<iostream>
using namespace std;
class human //Base Class aka Parent Class
{
protected:
string name;
public:
~human()
{
cout<<"In human"<<endl;
};
};
class student:public human //Derived Class aka child class
{
int rollno;
int fees;
public:
~student()
{
cout<<"In student"<<endl;
};
};
int main(void)
{
student S;
return 0;
}
//Output
//In student
//In human
