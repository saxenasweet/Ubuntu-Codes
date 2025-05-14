#include<iostream>
using namespace std;
class E
{
int a;
string f;
public:
E()
{
}
E(int x) //Default constructor
{
a=x;
}
E(string y)
{
f=y;
}
/*E(int p,string q)
{
a=p;
f=q;
}*/
inline E(int p,string q):a(p),f(q) //Inline constructor
{}
void display()
{
cout<<a<<" "<<f<<endl;
}
};
int main(void)
{
E e(10); //Object is created and it calls the constructor
e.display();
E ef("Kshitiz");
ef.display();
E gh(123,"Ram");
gh.display();
return 0;
}
