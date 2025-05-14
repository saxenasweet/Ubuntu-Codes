#include <iostream>
#include <list>
using namespace std;
int main()
{
// defining list
list<int> n{12,45,8,6};
for (auto i : n) {
cout << i << ' ';
}
return 0;
}
