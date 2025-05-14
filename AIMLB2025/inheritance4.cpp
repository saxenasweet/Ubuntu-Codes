#include<iostream>
using namespace std;
class human
{
string name;
int age;
public:
human() //Default constructor
{
cout<<"Hi Human";
}
human(string name,int age) //Parameterized constructor
{
this->name=name;
this->age=age;
}
void display()
{
cout<<"Hi "<<name<<" Your age is "<<age<<endl;
}
};
int main(void)
{
human e; //Default constructor
human h("Ravi",21); //Parametrized constructor
h.display();
return 0;
}
