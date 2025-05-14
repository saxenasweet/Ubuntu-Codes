#include<iostream>
using namespace std;
//Multiple Inheritance : One base class and multiple derived classes 
class human
{
protected:
string name;
};
class employee:public human
{
int salary;
};
class teacher:public human
{
int emp_id;
};
