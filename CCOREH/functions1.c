/*
Function is a self contained block of code which
accepts zero or more inputs and returns zero or 
one output
*/
void main(void)
{
int a,b,c;
int sum(int x,int y);
//Declare a function ->many times
//<return type> name_of_func(arguments...);
scanf("%d %d",&a,&b);//a=6 b=7
c=sum(a,b); //Calling a function sum(6,7)
printf("%d",c);
}
//Function Definition -only once
int sum(int x,int y) //x=6 y=7
{
int c;
c=x+y; //c=13
return (c);
}
