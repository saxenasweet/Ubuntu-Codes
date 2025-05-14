#include<iostream>
using namespace std;
class emp
{
private:
int a;
public:
int b;
void seta(void)
{
a=100;
}
void display(void)
{
cout<<b<<endl;
cout<<a<<endl;
}
};
int main(void)
{
emp amit; //Instantiation
amit.seta();//Initializes the value of private var a to 100
//amit.a=10; Throws an error becuase it is private
amit.b=3;//b is a public var
amit.display();
return 0;
}
