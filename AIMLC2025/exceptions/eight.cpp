#include<iostream>
using namespace std;
void fun()
{
throw 10; //Function throwing an exception
/*catch(int e)
{
cout<<"Exception handled in func";
}*/
}
int main()
{
int i = 3;
cout<<"Welcome";
try
{
if(i==3)
fun();
}
catch(int e) //Exception handled in main
{
cout<<"\nException"<<e;
}
cout<<"\nThe end";
return(0);
}
