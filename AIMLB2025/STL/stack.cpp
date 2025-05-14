//#include<bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;
void display(stack<int> st)
{
    stack<int> p = st;
    cout<<"In display function\n";
    while (!p.empty()) //Keep looping till stack is empty
    {
        cout <<p.top()<<" "; //Prints the top of the stack
        p.pop(); //Removes the top most element from the stack
    }
    cout <<"\n";
}
int main()
{
  stack<int> s; //Initialize the stack
  cout<<"Currently the size of stack is: "<<s.size()<<endl;
  s.push(2); // 2
  s.push(4); // 4 2 top=4
  s.push(1); // 1 4 2 top=1
//  cout<<s[0]; -> stack is not iterable
  cout<<"Printing the contents of the stack...\n";
  display(s); //Call the function to display the contents of the stack
  s.pop(); // 4 2
  cout<<"After removing an element from s, size is: "<<s.size()<<"\n";
  cout<<"Now the stack top is: "<<s.top()<<"\n"; // 4
  stack<int> s1; //Initializing another stack
  s1.push(9);
  s1.push(67); //The stack has 67 9
  cout<<"The size of stack s1 is : "<<s1.size()<<endl;
  swap(s,s1); //Interchanges elements of s and s1
  cout<<"Printing the swapped contents of s:\n";
/*  for(auto i:s) -> Needs an iterator but it wont work with stack
   cout<<i<<" ";
  cout<<"\n";*/
  display(s); // s now has 67 9
  return 0;
}
