#include<iostream>
using namespace std;
class Circle
{
public:
float radius;
void getradius(float g);
void areacircum(void);
};
void Circle::getradius(float g)
{
radius=g;
}
void Circle::areacircum(void)
{
float area,circum;
area=3.14*radius*radius;
circum=3.14*2*radius;
cout<<area<<" "<<circum<<endl;
}
int main(void)
{
class Circle c;
float x;
cin>>x;
c.getradius(x);
c.areacircum();
}

