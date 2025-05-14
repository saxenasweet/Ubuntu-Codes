#include<iostream>
using namespace std;
class fruits
{
int sno;
string fname;
float price;
public:
void get_params(void)
{
cin>>sno;
cin>>fname;
cin>>price;
}
void print_params(void)
{
cout<<sno<<fname<<price<<endl;
}
};
int main(void)
{
fruits apple;
apple.get_params();
apple.print_params();
}

