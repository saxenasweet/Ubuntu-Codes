#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
vector<int> v{ 3, 2, 1, 3, 3, 5, 3 };
cout << "Number of times 3 appears : " << count(v.begin(),v.end(), 3);
return 0;
}
