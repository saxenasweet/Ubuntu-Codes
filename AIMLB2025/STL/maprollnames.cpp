#include<bits/stdc++.h>
using namespace std;
void displayStr(map<string,string> mp)
{
     map <string, string> :: iterator it;
     for(it=mp.begin();it!=mp.end();it++)
     {
          cout<<it->first<<" "<<it->second<<"\n";
     }
     cout<<"\n";
}
int main()
{
  map<string, string> mp ;
  string rn,nam;
  int n;
  cout<<"Enter how many students are there in the class?";
  cin>>n;
  while(n>0)
  {
   cout<<"Enter Roll number?";
   cin>>rn;
   cout<<"Enter Name?";
   cin>>nam;
   mp.insert(pair<string,string>(rn,nam));
   n--;
  }
  cout<<"Printing Data..\n";
  displayStr(mp);
  return 0;
}
