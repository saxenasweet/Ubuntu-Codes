#include<iostream>
using namespace std;
int main(void)
{
int chk_prime(int x); //Declaration of a function
int a;
cout<<"Enter a number you want to check for Primality?"<<endl;
cin>>a;
if(chk_prime(a)==0)
 cout<<"Prime"<<endl; 
else
 cout<<"Composite"<<endl;
}
int chk_prime(int x) //Defining the function
{
int loop;
int count=0;
for(loop=2;loop<x;loop++)
{
if(x%loop==0)
  count++; //cout<<"composite"
}
return count; //Number of factors
}

