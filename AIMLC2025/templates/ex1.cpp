/*
Templates in C++
Templates are powerful features of C++ which allows you to write 
generic programs. In simple terms, you create a single function or 
class to work with different data types using templates.

The concept of templates can be used in two different ways:
-> Function Templates
-> Class Templates
*/

//Function template
#include<iostream>
using namespace std;
template <class T>  //syntax of function template
T sum(T a,T b)
{
cout<<"Total is: "<<a+b;
return (a+b);
}
int main()
{
sum(2,3);
sum(2.4f,3.1f);
//sum(2,3.1); //Will not compile
//sum("Hi"," SRM");//Will not work
}
