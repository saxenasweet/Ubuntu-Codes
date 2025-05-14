#include<iostream>
using namespace std;
class example
{
private:
int b;
public:
int a;
void getvalue(int b1);
void printvalue()
{
cout<<a<<b;
cout<<"Inside Function printvalue()"<<endl;
}
};
void example::getvalue(int b1)
{
b=b1;
}
int main(void)
{
example EX1; //Instantiation ->EX1
EX1.a=4;
//EX1.b=6;
EX1.getvalue(10);
cout<<EX1.a<<endl;
EX1.printvalue();
return 0;
}
