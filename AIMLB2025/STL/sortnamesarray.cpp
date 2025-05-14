/*
#include<array>
#include<iostream>
using namespace std;
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
  // Syntax array<object_type, array_size> array_name;
  array<string, 5> arr;
  int loop;
  cout<<"Enter 5 names:\n";
  for(loop=0;loop<5;loop++)
   cin>>arr[loop];
  sort(arr.begin(),arr.end());
  cout<<"Sorted Names are"<<endl;
  for(auto i:arr) //Iterator
   cout<<i<<endl;
  return 0;
}
