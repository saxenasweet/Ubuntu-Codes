#include<iostream>
using namespace std;
int main(void)
{
union abc
{
int a;
float c;
}t;
t.a=12;
cout<<t.a<<endl;
t.c=12.345;
cout<<t.c<<endl;
cout<<t.a<<endl; //Garbage value
}

