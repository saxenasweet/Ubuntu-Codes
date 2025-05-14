#include<bits/stdc++.h>
using namespace std;
void display(deque<int> d)
{
     cout<<"The Dequeue has :\n";
     for(auto x:d) //Iterator
     {
          cout<<x<<" ";
     }
     cout<<"\n";
}
int main()
{
  deque<int> d;
  d={1,4,2};
  cout<<d[0]<<"\n"; //Prints 1
  d.push_back(6); // {1,4,2,6}
  d.push_front(3); // {3,1,4,2,6}
  d.pop_back(); // {3,1,4,2}
  d.pop_front(); // {1,4,2}
  deque<int> d1 ={5,67,8,9};
  swap(d1,d); // d1 = {1,4,2} d={5,67,8,9}
  cout<<d.size()<<" "<<d.max_size()<<"\n"; // 4 4611686018427387903
  cout<<d.front()<<" "<<d.back()<<"\n"; // 5 9
  cout<<"Original Dequeue\n";
  display(d);
  d.front()=10;
  d.back()=20;
  cout<<"Updated Dequeue\n";
  display(d);
  cout<<"Front of the Dequeue :"<<d[0]<<endl;
  cout<<"Displaying the other Dequeue\n";
  display(d1);
  return 0;
}
