#include<iostream>
using namespace std;
class human
{
public:
~human()
{
cout<<"In human\n";
}
};
class student:public human
{
public:
~student()
{
cout<<"In student\n";
}
};
int main(void)
{
student s;
}
//Output:
//In student
//In Human
