#include<iostream>
using namespace std;
class ex
{
public:
int a;
char c;
};
void main(void)
{
ex E;
E.a=3;
E.c='d';
cout<<E.a<<" "<<E.c<<" "<<endl;
cout<<sizeof(E)<<endl;
}
