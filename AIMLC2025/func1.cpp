#include<iostream>
using namespace std;
int main(void)
{
void factors(int x); //Declaration of a function
int a;
cout<<"Enter a number whose factors you want?"<<endl;
cin>>a;
factors(a); //Calling the function
}
void factors(int x) //Defining the function
{
int loop;
for(loop=1;loop<=x;loop++)
{
if(x%loop==0)
  cout<<loop<<endl;
}
}

