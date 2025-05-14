#include<iostream>
using namespace std;
class human
{
protected:
string name;
char gender;
};
class student:public human
{
int rno;
float pcmper;
float fees;
};
class teacher:public human
{
float salary;
string specialization;
string lastdegree;
};

