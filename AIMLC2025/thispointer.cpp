#include<iostream>
using namespace std;
class exp
{
public:
string name;
int age;
int rollnum;
exp(string name,int age,int rollnum)
{
this->name=name;
this->age=age;
this->rollnum=rollnum;
}
void display()
{
cout<<"My name is "<<name<<" and age is "<<age<<"and roll num is "<<rollnum<<endl;
}
};
int main(void)
{
exp obj1("Ravi",20,1);
obj1.display();
}
