#include<iostream>
using namespace std;
int main(void)
{
int a,loop;
cout<<"Enter a number whose factors you want?"<<endl;
cin>>a;
for(loop=1;loop<=a;loop++)
{
if(a%loop==0)
  cout<<loop<<endl;
}
}

