#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
int n = sizeof(arr) / sizeof(arr[0]); //40/4
sort(arr, arr + n); //Arrange numbers in an ascending order
cout << "\nArray after sorting using default sort is : \n";
for (int i = 0; i < n; ++i) cout << arr[i] << " ";
return 0;
}
