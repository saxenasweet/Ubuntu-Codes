// C++ program to demonstrate the use of std::search
// with binary predicate
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
// Defining the BinaryPredicate function
bool pred(int i, int j)
{
    if (i > j)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int i, j;

    // Declaring the sequence to be searched into
    vector<int> v1 = {1, 2, 3, 4, 5, 6, 7};

    // Declaring the subsequence to be compared to based
    // on predicate
    vector<int> v2 = {3, 4, 5};

    // Declaring an iterator for storing the returning pointer
    vector<int>::iterator i1;

    // Using std::search and storing the result in
    // iterator i1 based on predicate pred
    i1 = search(v1.begin(), v1.end(), v2.begin(), v2.end(), pred);

    // checking if iterator i1 contains end pointer of v1 or not
    if (i1 != v1.end())
    {
        cout << "vector1 elements are greater than vector2 starting "
             << "from position " << (i1 - v1.begin());
    }
    else
    {
        cout << "vector1 elements are not greater than vector2 "
             << "elements consecutively.";
    }

    return 0;
}
