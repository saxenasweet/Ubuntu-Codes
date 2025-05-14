#include<iostream>
using namespace std;
class A
{
public:
A()
{
cout<<"In A\n";
};
void displayA()
{
 cout<<"Hi A\n";
}
};
class B
{
public:
B()
{
cout<<"In B\n";
};
void displayB()
{
 cout<<"Hi B\n";
}
};
class C:public B, public A
{
public:
C()
{
cout<<"In C\n";
};
void displayC()
{
 cout<<"Hi C\n";
}
};
int main(void)
{
C C1;
C1.displayC();
return 0;
} 
