#include<iostream>
using namespace std;
//Declare a class
class Wall
{
private:
double length;
double height;
public://Parameterized constructor to initialize variables
Wall(double len,double hgt)
:length{len},height{hgt}
{
}
double calculatePeri()
{
return 2*(length+height);
}
double calculateArea()
{
return length*height;
}
};
int main()
{
//Create object and initialize data members
float x,y;
cin>>x>>y;
Wall wall1(x,y);
cout<<"The perimeter and area of the wall 1 is: "<<wall1.calculatePeri()<<" "<<wall1.calculateArea()<<endl;
return 0;
}
