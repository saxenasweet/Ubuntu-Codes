#include<bits/stdc++.h>
using namespace std;
void display(set<char> st)
{
    for(auto x:st)
    {
         cout<<x<<" ";
    }
    cout <<"\n";
}
int main()
{
  string nam;
  set<char> s;
  cout<<"Enter a name?";
  cin>>nam;
  for(int i=0;nam[i]!='\x0';i++)
   s.insert(nam[i]);
  display(s);
  //Copy the set to stringB
 int i=0;
 for(auto x:s)
  {
     nam[i]=x; //Copying each alphabet in s to nam
     i++;//move one index up
  }
 nam[i]='\x0'; //copy null as the last character to the string
 cout<<"The revised string is : "<<nam<<endl;
 return 0;
}
