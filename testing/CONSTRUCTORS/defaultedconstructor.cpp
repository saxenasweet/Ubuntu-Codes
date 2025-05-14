#include<iostream>
using namespace std;
class Wall
{
private:
double length{5.5};
public://defaulted constructor to initialize variable
Wall()=default;
void print_length()
{
cout<<"Length="<<length<<endl;
}
};
int main(void)
{
Wall wall1;
wall1.print_length();
return 0;
}
