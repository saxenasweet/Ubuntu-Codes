#include<iostream>
using namespace std;
int main(void)
{
union mem_sv
{
int a;
char ch;
}e;
e.a=34;
cout<<e.a;
e.ch='Y';
cout<<e.ch;
cout<<e.a; //Prints a garbage value
}
