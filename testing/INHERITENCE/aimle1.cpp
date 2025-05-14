#include<iostream>
using namespace std;
class human
{
protected:
string name;
int age;
};
class student:public human
{
int rollno;
int fees;
};
int main(void)
{
student s;
s.name="Ravi";
cout<<s.name<<endl;
return 0;
}

