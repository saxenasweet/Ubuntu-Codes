#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
string s = "abcdeafghjand";
cout << "Number of times 'a' appears : "<< count(s.begin(),s.end(), 'a');
return 0;
}
