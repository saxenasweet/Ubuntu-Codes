#include<iostream>
using namespace std;
class E
{
int a;
string n;
public:
/*E()
{//Constructor within the same class
cout<<"In the constructor"<<endl;
a=2;
n="Ks";
}*/
E()
{
cout<<"In the constructor"<<endl;
}
~E()
{
cout<<"In the destructor"<<endl;
}
void display()
{
cout<<a<<" "<<n<<endl;
}
};
int main(void)
{
E e; //Object 
e.display();
return 0;
}
