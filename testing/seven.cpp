#include<iostream>
using namespace std;
class fruits
{
int sno;
string fname;
float price;
public:
void take_input(void)
{
cin>>sno;
cin>>fname;
cin>>price;
}
void display(void)
{
cout<<sno<<fname<<price;
}
};
int main(void)
{
fruits apple;
apple.take_input();
apple.display();
}
