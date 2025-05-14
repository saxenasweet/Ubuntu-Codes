#include<iostream>
using namespace std;
//Declare a class
class Wall
{
private:
double length;
double height;
public:
//Initialize variables with parametrized constructors
Wall(double len, double hgt)
:length{len},height{hgt}
{
}
double calculateArea()
{
return length*height;
}
};

