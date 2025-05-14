#include<iostream>
using namespace std;
class Employee
{
string ename;
int eid;
float esalary;
public:
Employee()
{
eid=0;
esalary=0.0;
}
void getvalues()
{
cout<<"Employee Name, Employee Id, Employee Salary";
cin>>ename>>eid>>esalary;
}
float totalsalary()
{
return (esalary+(esalary*.3)+(esalary*.1)-(esalary*.05));
}
};
int main(void)
{
Employee e;
e.getvalues();
cout<<"Total salary is "<<e.totalsalary()<<endl;
return 0;
}
