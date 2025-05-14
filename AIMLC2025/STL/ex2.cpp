#include <iostream>
#include <vector>
using namespace std;
int main() {
vector<int> numbers = {1, 100, 10, 70, 100};
// initialize a vector of int type
cout << "Numbers are: "; // print the vector
cout <<numbers.size()<<endl;
for(auto &num: numbers) { //Uses an iterator to print the elements of 
cout << num << ", "; //vector
}
return 0;
}
