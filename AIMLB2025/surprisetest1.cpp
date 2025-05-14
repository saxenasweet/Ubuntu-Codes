#include<iostream>
using namespace std;
class Employee
{
int emp_id;
string name;
float salary;
int performance_level;
public:
void getvalues(void)
{
cout<<"Enter performance level(1-Average,2-Good,3-Best,4-Poor)"<<endl;
cin>>performance_level;
cin>>emp_id>>name>>salary;
}
void printvalues(void)
{
switch(performance_level)
{
case 1:
 salary=1.1*salary;
 break;
case 2:
 salary=1.2*salary;
 break;
case 3:
 salary=1.3*salary;
 break;
case 4:
 salary=0.9*salary;
 break;
}
cout<<emp_id<<" "<<name<<salary<<endl;
}
};
int main(void)
{
Employee e1;
e1.getvalues();
e1.printvalues();
return 0;
}
