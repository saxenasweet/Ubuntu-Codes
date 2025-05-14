/*
a="hello"
b="srm"
a+b="hellosrm"
c=a
c=c+b
c[0]=a[0]
c[1]=a[1]
c[2]=a[2]
c[3]=a[3]
c[4]=a[4]
c="hello"
c[5]=b[0]
c[6]=b[1]
c[7]=b[2]
c="hellosrm"
*/
#include<stdio.h>
void main(void)
{
char a[20],b[20],c[40];
gets(a);
gets(b);
int i,j;
for(i=0;a[i]!='\x0';i++)
c[i]=a[i];
for(j=0;b[j]!='\x0';j++)
c[i+j]=b[j];
c[i+j]='\x0';
puts(c);
}

