#include<bits/stdc++.h>
using namespace std;
void display(map<int,int> mp) //The key value pairs are both int
{
     map <int, int> :: iterator it;
     for(it=mp.begin();it!=mp.end();it++)
     {
         cout<<it->first<<" "<<it->second<<"\n"; //Access key value pair
     }
     cout<<"\n";
}
void displayStr(map<string,int> mp)
{
     map <string, int> :: iterator it;
     for(it=mp.begin();it!=mp.end();it++)
     {
          cout<<it->first<<" "<<it->second<<"\n";
     }
     cout<<"\n";
}
int main()
{
  map<int, int> mp = {{1,4},{2,6}};
  mp.insert(pair<int,int>(3,5));
  display(mp);
  /*
     1 4
     2 6
     3 5
  */
  map<string,int> mp1;
  mp1["mango"] = 4;
  mp1["banana"] = 1;
  mp1["apple"] = 3;
  mp1.insert(pair<string,int>("cherry",5));
  displayStr(mp1);
  /*
  If key is of string typDDe then key value pair is sorted 
  lexicographically
     apple 3
     banana 1
     cherry 5
     mango 4
  */
  cout<<mp[1]<<"\n"; // 1
  cout<<mp1.at("mango")<<"\n"; // 4
  mp1.erase("apple");
  /*
     banana 1
     cherry 5
     mango 4
  */
  displayStr(mp1);
  return 0;
}
