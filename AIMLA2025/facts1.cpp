#include<iostream>
using namespace std;
int g=6;
int main(void)
{
int g=7;
cout<<::g; //Print the global value
cout<<g; //Print the local value
}

