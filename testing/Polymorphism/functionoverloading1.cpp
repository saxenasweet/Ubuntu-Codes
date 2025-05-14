#include<iostream>
using namespace std;
class Area
{
public:
float CalculateArea(float r) //Circle
{
return 3.14*r*r;
}
float CalculateArea(float l,float b)
{
return l*b;
}
};
int main(void)
{
string s;
Area A1;
cout<<"Enter your choice(Circle or Rectangle)?";
cin>>s;
if(s=="Circle")
{
float r;
cin>>r;
cout<<"The area of circle is:"<<A1.CalculateArea(r)<<endl;
}
else
{
float l,b;
cin>>l>>b;
cout<<"The area of rectangle is:"<<A1.CalculateArea(l,b)<<endl;
}
return 0;
}
