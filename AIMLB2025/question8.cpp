#include<iostream>
using namespace std;
class Date
{
private:
int dd,mm,yyyy;
public:
void setDate(int a,int b,int c)
{
dd=a;
mm=b;
yyyy=c;
}
void chkDate(void)
{
if(((dd>=1)&&(dd<=31))&&((mm>=1)&&(mm<=12))&&((yyyy>=1)&&(yyyy<=2100)))
{
 cout<<"The date is in valid format and is "<<dd<<":"<<mm<<":"<<yyyy<<endl;
}
else
 cout<<"The date is not in a valid format"<<endl;
}
};
