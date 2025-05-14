#include<iostream>
using namespace std;
class e
{
private:
int a,b;
public:
int c;
void setdata(int a1,int b1); //declaration of functions
void printdata(void);
};
void e::setdata(int a1,int b1)//Definition
{
a=a1;
b=b1;
}
void e::printdata(void)
{
cout<<a<<" "<<b<<" "<<c<<endl;
}
int main(void)
{
class e E1;//Object creation
E1.setdata(1,2);//set values of private vars a and b
E1.c=3;//set value of public var
E1.printdata();//print values of a ,b,c
}

