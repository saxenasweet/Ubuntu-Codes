#include<iostream>
using namespace std;
class Rectangle
{
private:
float length,width;
public:
void areanperi(void);
void getlengthwidth(float l,float w);
};
void Rectangle::getlengthwidth(float l,float w)
{
length=l;
width=w;
}
void Rectangle::areanperi(void)
{
float area,peri;
area=length*width;
peri=2*(length+width);
cout<<area<<" "<<peri<<endl;
}
int main(void)
{
class Rectangle r;
float l,b;
cin>>l;
cin>>b;
r.getlengthwidth(l,b);
r.areanperi();
}
