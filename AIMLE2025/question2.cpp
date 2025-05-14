#include<iostream>
using namespace std;
class rectangle
{
private:
float l;
float b;
public:
void setparams(float x,float y);
void printareapara();
};
void rectangle::setparams(float x,float y)
{
l=x;
b=y;
}
void rectangle::printareapara()
{
float area,para;
area=l*b;
para=2*(l+b);
cout<<area<<" "<<para<<endl;
}
int main(void)
{
class rectangle r;
float a,b;
cout<<"Enter length and width of the rectangle?"<<endl;
cin>>a;
cin>>b;
r.setparams(a,b);
r.printareapara();
}

