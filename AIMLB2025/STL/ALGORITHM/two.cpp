#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() // C++ program for count in C++ STL for array
{
int a[] = { 3, 2, 1, 3, 3, 5, 3 };
cout << " Number of times 3 appears : "<< count(a, a + 7, 3);
return 0;
}
