// C++ code to demonstrate working of size() and max_size()
#include<iostream>
#include<array> // for size() and max_size()
using namespace std;
int main()
{
float sum,avg;
// Initializing the array elements
array<int,4> ar = {1,2,3,4};
array<int,4> br ={5,6,7,8};
ar.swap(br); //Swaps the elements of two arrays
cout<<"Printing array ar:"<<endl;
for(int j=0;j<ar.max_size();j++)
 cout<<ar[j]<<" ";
cout<<endl;
for(int k=0;k<br.max_size();k++)
 cout<<br[k]<<" ";
cout<<endl;
/*
cout<<ar.at(0)<<endl;
//cout<<ar.at[0]<<endl;

// Printing number of array elements
cout << "The number of array elements is : ";
cout << ar.size() << endl;
// Printing maximum elements array can hold
cout << "Maximum elements array can hold is : ";
cout << ar.max_size() << endl;
//Both the methods return the same value
cout <<"Is the array empty?"<<ar.empty()<<endl;
cout <<"The front element is: "<<ar.front() <<endl;
cout <<"The back element is :"<<ar.back() <<endl;
cout<<ar.at(2)<<endl; //Element at index 2
for(int i=0;i<ar.max_size();i++)
{
cout<<ar.at(i)<<endl;
sum+=ar.at(i);
}
avg=sum/ar.max_size();
cout<<"Sum is "<<sum<<" and Average is : "<<avg<<endl;
//cout<<ar.get(2)<<endl;-> to debug -> 
//Microsoft C++ documentation does not have this method in array class!
ar.fill(9);
cout<<"Printing the array with all nines"<<endl;
for(int i=0;i<ar.max_size();i++)
cout<<ar.at(i)<<endl;
*/
return 0;
}
