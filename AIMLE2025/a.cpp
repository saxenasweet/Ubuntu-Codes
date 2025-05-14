#include<iostream>
using namespace std;
int a=6; //Global var
int main(void)
{
int a=7; //Local var
cout<<::a<<endl; //:: scope resolution operator -> Global val
cout<<a<<endl; //local val
}

