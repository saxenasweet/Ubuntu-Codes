#include<iostream>
using namespace std;
#define GREATEST(a,b) a>b?a:b
int main(void)
{
int a,b;
cin>>a>>b;
cout<<"The greatest number is: "<<(GREATEST(a,b))<<endl;
return 0;
}
