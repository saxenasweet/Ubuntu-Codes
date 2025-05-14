#include<iostream>
using namespace std;
class human
{
public:
~human()
{
cout<<"In human"<<endl;
}
};
class student:public human
{
public:
~student()
{
cout<<"In student"<<endl;
}
};
int main(void)
{
student s;
//Output:
//In student
//In human
}
