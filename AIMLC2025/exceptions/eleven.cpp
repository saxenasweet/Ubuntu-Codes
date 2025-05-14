#include<iostream>
using namespace std;
void divide(double x,double y)
{
cout<<"Inside function\n";
try
{
if(y==0.0)
throw y; // throwing double
else
cout<<"The division = "<<x/y<<"\n";
}
catch(double)
{
cout<<"Caught double inside function\n";
throw; //rethrowing double
}
cout<<"End of function\n";
}
int main()
{
cout<<"Inside Main\n";
try
{
divide(10.5,2.0);
divide(20.0,0.0);
}
catch(double) //will be caught after rethrowing exception in function
{
cout<<"Caught double inside main\n";
}
cout<<"End of main\n";
}
