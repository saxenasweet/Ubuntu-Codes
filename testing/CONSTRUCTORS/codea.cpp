#include<iostream>
using namespace std;
class emp
{
private:
int ecode;
string name;
public:
emp()
{
ecode=12;
name="deepak";
}
};
int main(void)
{
emp e;
cout<<e.ecode<<" "<<e.name<<endl;
}
