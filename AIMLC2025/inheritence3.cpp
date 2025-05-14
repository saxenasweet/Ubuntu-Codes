#include<iostream>
using namespace std;
class human
{
string name;
};
class student:public human
{
int rollno;
};
class teacher:public human
{
int salary;
};
int main(void)
{
cout<<"Hello";
return 0;
}
