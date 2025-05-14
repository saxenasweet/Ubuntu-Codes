#include<iostream>
using namespace std;
class e
{
private:
//char st[30];
public:
void putst(char *p);
void putst(char *p)
{
cout>>*p;
}
};
int main(void)
{
class e x;
char pw[50]="hello";
x.putst(&pw[0]);
}
