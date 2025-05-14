#include<iostream>
using namespace std;
class circle
{
private:
float radius;
public:
void getradius(float a); //Function declaration
void printarea();//Function declaration
};
void circle::getradius(float a)
{
radius=a;
}
void circle::printarea()
{
float area,circum;
area=3.14*radius*radius;
circum=3.14*2*radius;
cout<<area<<" "<<circum<<endl;
}
int main(void)
{
class circle c;
float r;
cout<<"Enter the radius?";
cin>>r;
c.getradius(r);
c.printarea();
}


