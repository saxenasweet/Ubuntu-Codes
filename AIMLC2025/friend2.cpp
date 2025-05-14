#include<iostream>
using namespace std;
class b;
class a
{
int x;
public:
void getdata();
friend void max(a,b); //The placement of friend function doesnt matter
};
class b
{
int y;
public:
void gd()
{
cin>>y;
}
friend void max(a,b);
};
void a::getdata()
{
cin>>x;
}
void max(a aa,b bb) //Passing the object as a paramater to the function
{
if(aa.x>bb.y)
 cout<<aa.x;
else
 cout<<bb.y;
}
int main(void)
{
a aa;
b bb;
aa.getdata();
bb.gd();
max(aa,bb);
return 0;
}

