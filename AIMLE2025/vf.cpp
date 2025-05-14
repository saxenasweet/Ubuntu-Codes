#include<iostream>
using namespace std;
class h
{
public:
virtual void show()=0; //Pure Virtual Function
/*virtual void show()
{
cout<<"In h"<<endl;
}*/
};
class i:public h
{
public:
void show()
{
cout<<"In i"<<endl;
}
};
int main(void)
{
h *p; //create a pointer to the base class
i q; //create an object of the derived class
p=&q;
p->show();
return 0;
}
