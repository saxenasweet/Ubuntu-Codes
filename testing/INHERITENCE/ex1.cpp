#include<iostream>
using namespace std;
class human
{
string name;
int age;
char gender;
public:
human(string name,int age,char gender)
{
this->name=name;
this->age=age;
this->gender=gender;
}
void display()
{
cout<<"In Human display"<<endl;
}
};
class student:public human
{
int rollnumber;
int fees;
public:
student(int rollnumber,int fees)
{
this->rollnumber=rollnumber;
this->fees=fees;
}
void display()
{
cout<<"In Student Display"<<endl;
}
};
int main(void)
{
human h("Ravi",21,'M');
student s(1,350000);
s.display();
cout<<"Hello";
return 0;
}

