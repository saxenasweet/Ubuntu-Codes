#include<iostream>
using namespace std;
class Complex
{
int real,img;
public:
Complex() //Default Constructor
{
};
Complex(int r,int i)
{
real=r;
img=i;
}
void display()
{
cout<<real<<" +i"<<img<<endl;
}
Complex operator +(Complex &C) //Copy Constructor
{
Complex ans;
ans.real=real+C.real;
ans.img=img+C.img;
return ans;
}
};
int main(void)
{
Complex C1(3,4);
Complex C2(4,5);
//We want to add these complex numbers
Complex C3=C1 + C2;
//C3=C1+C2
C3.display();
return 0;
}


