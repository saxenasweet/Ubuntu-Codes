//Function Overloading
#include<iostream>
using namespace std;

int main(void)
{
void func(int x); //Function declaration
void func(int r,int y); //Function declaration
func(1);//Call the function
func(1,2);//Call the function
}
void func(int x)
{
x++;
cout<<x<<endl;
}
void func(int r,int y)
{
r++;
y++;
cout<<r<<" "<<y<<" "<<endl;
}
