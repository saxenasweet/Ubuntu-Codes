#include<iostream>
using namespace std;
static int a; //Global var
class e
{
public:
e()
{
cout<<"In the constructor\n";
cout<<a;
a++;
}
~e()
{
cout<<"In the destructor\n";
cout<<a;
a--;
}
};
int main(void)
{
e E,F,G,H;
H=G; //

}


