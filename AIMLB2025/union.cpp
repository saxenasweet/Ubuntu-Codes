/*
Union is used to store hetrogeneous data type values. But the memory
space allocated is equal to the maximum memory taken up an individual
member element only
*/
#include<iostream>
using namespace std;
int main(void)
{
union stu
{
int age;
char gender;
}amit;
amit.age=19;
cout<<amit.age;
amit.gender='M';
cout<<amit.gender;
cout<<amit.age; //GARBAGE VALUE
}

