#include<iostream>
using namespace std;
int main(void)
{
void fibonacci(int n);
int num;
cout<<"Enter how many Fibonacci Terms you want?"<<endl;
cin>>num;
fibonacci(num);
}
void fibonacci(int n)
{
int f1=1,f2=1;
int t;
cout<<f1<<endl<<f2<<endl;
n-=2; //n=n-2
while(n>0)
{
t=f1+f2;
cout<<t<<endl;
f1=f2;
f2=t;
n--;
}
}

