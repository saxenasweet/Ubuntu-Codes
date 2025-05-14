#include<iostream>
using namespace std
//One base class and multiple derived class->Multiple Inheritance
class human
{
protected:
string name;
};
class student:public human
{
int fees;
int rollnum;
}
class teacher:public human
{
int salary;
int emp_id;
};
