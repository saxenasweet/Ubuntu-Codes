#include<iostream>
using namespace std;
class demo
{
int a,b; //Are private and can not be accessed outside the class
//friend int sum(demo); //The class is passed as an argument
public:
void getdata();
friend int sum(demo); //The placement of friend function doesnt matter
};
void demo::getdata()
{
cout<<"Enter two numbers?";
cin>>a>>b;
}
int sum(demo aa) //Passing the object as a paramater to the function
{
return (aa.a+aa.b);
}
int main(void)
{
demo aa;
aa.getdata();
cout<<"Addition is:"<<sum(aa);
return 0;
}

