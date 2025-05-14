#include<iostream>
using namespace std;
int main(void)
{
void func(int a);
void func(char ch,int x,int y);
func(1);
func('w',3,4);
return 0;
}
void func(int a)
{
cout<<" In func with one argument "<<a<<endl;
}
void func(char ch,int x,int y)
{
cout<<" In func with three argument "<<ch<<" "<<x<<" "<<y;
}

