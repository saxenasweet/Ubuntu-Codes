#include<iostream>
using namespace std;
class student
{
int rno;
char name[50];
double fee;
public:
student() //constructor within the class
{
cin>>rno;
cin>>name;
cin>>fee;
}
void display()
{
cout<<rno<<name<<fee<<endl;
}
};
int main(void)
{
student s; //Object instantiation
s.display();
return 0;
}
