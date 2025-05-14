#include<iostream>
using namespace std;
int main(void)
{
struct emp
{
int empn;
float salary;
char gender;
}texas[50]; //Array of structures
int loop;
for(loop=0;loop<2;loop++)
{
cin>>texas[loop].empn;
cin>>texas[loop].salary;
cin>>texas[loop].gender;
}
cout<<"Printing values..."<<endl;
for(loop=0;loop<2;loop++)
cout<<texas[loop].empn<<" "<<texas[loop].salary<<" "<<texas[loop].gender<<endl;
return 0;
}


