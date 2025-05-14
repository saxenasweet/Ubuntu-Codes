#include<bits/stdc++.h>
using namespace std;
int main()
{
  queue<int> q;
 //queue<int>::iterator it;-> Not supported
 /*
 Because the container adaptors (std::stack, std::queue,
 std::priority_queue) don't provide an iteration interface.
 If you need this, use std::deque instead.*/
  cout<<"Now queue size is "<<q.size()<<endl;
  q.push(2); // front = 2 back = 2
  cout<<"Now it is "<<q.size()<<endl;
  q.push(6); // front = 2 back = 6 
  q.push(8);
  cout<<"Now it is "<<q.size()<<endl;
/*  for(auto &i:q)
    cout<<*i;
  endl;*///-> to debug
//  cout<<q[0]; ->queue does not support indexing
  q.pop(); // 2 will be removed 
  cout<<"After pop it is "<<q.size()<<endl;
  cout<<q.size()<<endl;
  cout<<q.front()<<"\n"; // 6 
  queue<int> q1;
  q1.push(3); 
  swap(q,q1); // Elements of q and q1 will be swapped
  q.push(99);
  cout<<q.front()<<"\n"; // front of q = 3
  cout<<q.back()<<"\n";
  q.front()=111; //Now the front element is changed to 111
  q.back()=0;//And the last element is changed to 0
  return 0;
}
