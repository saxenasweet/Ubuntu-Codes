#include <iostream> //Code for find algorithm
using namespace std;
#include <bits/stdc++.h>
int main()
{
vector<int> v{10, 30, 30, 40};
vector<int>::iterator it; // Iterator used to store the
//position of searched element
cout << "Original vector :"; // Print Original Vector
for (int i = 0; i < v.size(); i++)cout << " " << v[i]<<endl;
int ser = 30; // Element to be searched
it = find(v.begin(),v.end(), ser); // std::find function call
cout<<&it<<"\n"; //Prints the address where 30 is in the vector
if (it != v.end())
{
cout << "Element " << ser << " found at position : ";
cout << it - v.begin() << " (counting from zero) \n";
}
else
cout << "Element  not found.\n\n";
return 0;
}
