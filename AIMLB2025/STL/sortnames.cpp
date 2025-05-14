#include<bits/stdc++.h>
using namespace std;
void displayStr(list<string> ls)
{
     for(auto x:ls)
     {
          cout<<x<<" ";
     }
     cout<<"\n";
}
int main()
{
  int n,t;
  string nam;
  cout<<"Enter how many names you wish to enter?";
  cin>>n;
  list<string> list2;
  t=n;
  while(t>0)
  {
  cout<<"Enter a name?";
  cin>>nam;
  list2.insert(list2.begin(),nam);
  t--;
  }
  cout<<"\nBefore Sorting:\n";
  displayStr(list2);
  list2.sort();
  cout<<"\nAfter Sorting:\n";
  displayStr(list2);
  return 0;
}
