#include<iostream>
using namespace std;
class ex
{
private:
int num1,num2;
public:
ex(int n1,int n2)
{
num1=n1;
num2=n2;
}
void check()
{
if(num1>num2)
 cout<<"The greatest number is :"<<num1<<endl;
else
 cout<<"The greatest number is :"<<num2<<endl;
}
};
int main(void)
{
ex e(3.2,3.6); //The constructor will accept only 3 and 3 
e.check();
return 0;
}

