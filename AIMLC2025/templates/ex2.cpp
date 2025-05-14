//Class Template
#include<iostream>
using namespace std;
class Demo
{
private:
 int num1,num2;
public:
 Demo(int n1,int n2)
{
 num1=n1;
 num2=n2;
}
void check()
{
if(num1>num2)
{
 cout<<num1<<" is the largest number"<<endl;
}
else
{
 cout<<num2<<" is the largest number"<<endl;
}
}
};
int main()
{
Demo obj1(5.3,5.5);
obj1.check();
return 0;
}
