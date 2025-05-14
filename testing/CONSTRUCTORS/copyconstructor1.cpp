#include<iostream>
using namespace std;
class customer
{
string cname;
int cacc_num;
float balance;
public:
customer()
{
cout<<"In the constructor"<<endl;
}
customer(string c,int ca,float b)
{
cname=c;
cacc_num=ca;
balance=b;
}
customer(customer &obj) //Copy constructor
{
cname=obj.cname;
cacc_num=obj.cacc_num;
balance=obj.balance;
}
void display()
{
cout<<cname<<" "<<cacc_num<<" "<<balance<<endl;
}
};
int main(void)
{
customer C1; //will invoke the default constructor
customer C2("Ravi",1,1000); 
//Will invoke the parametrerized constructor
C2.display();
//customer C3(C2);
//C3=C2;
//customer C3(C1); //Default copy constructor...does it work??
customer C3(C1); //We have added our own Copy constructor
C3.display();
}


