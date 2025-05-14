#include<stdio.h>
#include<iostream>
using namespace std;
void test(int x)
{
try
{
if(x==0)
throw x;
if(x==-1)
throw 'x';
if(x==1)
throw 1.0;
printf("Hello"); //Will never get printed
}
catch(...) //Catching all exceptions
{
cout<<"Caught all exceptions\n";
}
}
int main()
{
cout<<"Testing genric catch\n";
test(-1);
test(0);
test(1);
cout<<"THE END\n"; //Will get printed
}
