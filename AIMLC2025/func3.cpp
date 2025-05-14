#include<iostream>
using namespace std;
int main(void)
{
int f1=1,f2=1;
int t;
int n;
cout<<"Enter how many Fibonacci Terms?"<<endl;
cin>>n;
cout<<f1<<endl<<f2<<endl;
n=n-2;
while(n>0)
{
t=f1+f2;
cout<<t<<endl;
f1=f2;
f2=t;
n--;
}
}
