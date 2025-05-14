#include<iostream>
using namespace std;
void sum(float a,float b)
{
cout<<"The sum is: "<<a+b;
}
void sum(int a,int b)
{
cout<<"The sum is: "<<a+b;
}
int main()
{
sum(3.2,4.6);
sum(3,4);
}

