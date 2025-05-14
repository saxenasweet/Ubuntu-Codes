#include<iostream>
using namespace std;
class human
{
public:
string name;
int age;
};
class student:public human
{
private:
int fees;
int rollnum;
};
int main(void)
{
student R;
R.name="Ravi";
cout<<"Hello "<<R.name<<endl;
return 0;
}
