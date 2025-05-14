#include<iostream>
using namespace std;
void nswap(int a,int b)
{
int t;
t=a;
a=b;
b=t;
cout<<"Swapped values are "<<a<<" and "<<b<<endl;
}
int main(void)
{
//int x,y;
//cin>>x>>y;
nswap(3.3,3.4);
return 0;
}
