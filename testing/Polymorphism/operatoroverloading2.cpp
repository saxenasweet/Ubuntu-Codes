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
//(a+ib)*(c+id)=ac-bd+i(ad+bc)
ans.real=(real*C.real)-(img*img);
ans.img=(real*C.img)+(img*C.real);
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


