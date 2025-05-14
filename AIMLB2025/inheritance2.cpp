#include<iostream>
using namespace std;
class human
{
string name;
};
class employee:public human
{
int salary;
};
class manager:public employee
{
string department_name;
};
//A child  class inherits from a base class. This child class
//becomes the parent of another derived class
