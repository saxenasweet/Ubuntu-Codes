#include <bits/stdc++.h>
using namespace std;
void printx2(int a) // helper function 1
{
cout << a * 2 << " ";
}
struct Class2 // helper function 2 object type function
{
void operator() (int a)
{
cout << a * 3 << " ";
}
} ob1;
int main()
{
int arr[5] = { 1, 5, 2, 4, 3 }; // initializing array
cout << "Using Arrays:" << endl;
cout << "Multiple of 2 of elements are : ";
for_each(arr, arr + 5, printx2);
 // printing array using for_each using function
cout << endl;
cout << "Multiple of 3 of elements are : ";
 // printing array using for_each using object function
for_each(arr, arr + 5, ob1);
cout << endl;
vector<int> arr1 = { 4, 5, 8, 3, 1 }; // initializing vector
cout << "Using Vectors:" << endl;
cout << "Multiple of 2 of elements are : ";
 // printing array using for_each using function
for_each(arr1.begin(), arr1.end(), printx2);
cout << endl;
cout << "Multiple of 3 of elements are : ";
 // printing array using for_each using object function
for_each(arr1.begin(), arr1.end(), ob1);
cout << endl;
return 0;
}
