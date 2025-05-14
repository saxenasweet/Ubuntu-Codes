#include<iostream>
using namespace std;
template <class T>
T sum(T a,T b)
{
cout<<"The sum is : "<<a+b<<endl;
return a+b;
}
int main(void)
{
int c=4.3;
sum(3.1,4.1);
sum(3,4);
sum("Hi"," SRM");
//Wont work sum(2,3.1);
return 0;
}

