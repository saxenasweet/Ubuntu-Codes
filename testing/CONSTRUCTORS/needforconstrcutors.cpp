#include<iostream>
using namespace std;
class fruits
{
int sno;
string fname;
float price;
public:
void getvalues(void)
{
cin>>sno;
cin>>fname;
cin>>price;
}
void printvalues(void)
{
cout<<sno<<" "<<fname<<" "<<price<<endl;
}
};
int main(void)
{
fruits apple;
apple.getvalues();
apple.printvalues();
return 0;
}
