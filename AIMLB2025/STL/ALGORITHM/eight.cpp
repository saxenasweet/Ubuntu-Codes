#include <bits/stdc++.h> //Code to sort and merge the two containers
using namespace std;
int main()
{
vector<int> arr1 = { 1, 4, 6, 3, 2 }; // initializing 1st container
vector<int> arr2 = { 6, 2, 5, 7, 1 };
vector<int> arr3(10); // declaring resultant container
sort(arr1.begin(), arr1.end()); // sorting initial container -arr1
sort(arr2.begin(), arr2.end());// Sorting container - arr2
merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), arr3.begin());
 // using merge() to merge the initial containers
for (int i = 0; i < arr3.size(); i++)
cout << arr3[i] << " ";
return 0;
}
