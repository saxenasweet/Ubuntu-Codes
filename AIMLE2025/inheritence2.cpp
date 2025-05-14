#include<iostream>
using namespace std;
//Multilevel Inheritance
//A derived class becomes the base class for another class
class human
{
public:
string name;
};
class employee:public human
{
public:
int salary;
};
class manager:public employee
{
public:
string deptname;
int no_of_emp;
};

