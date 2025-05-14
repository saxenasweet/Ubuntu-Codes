#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
string s;
cout<<"Enter a string?";
cin>>s;
char ch='A';
int freq;
for(;ch<='Z';ch++)
{
freq=count(s.begin(),s.end(),ch);
if(freq!=0)
cout << "Number of times "<<ch<<" appears : "<< count(s.begin(),s.end(), ch)<<endl;
}
return 0;
}
