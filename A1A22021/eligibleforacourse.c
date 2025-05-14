#include<stdio.h>
void main(void)
{
int p,c,m,pm,pcm;
printf("Enter marks of physics , chemistry and math ?");
scanf("%d %d %d",&p,&c,&m);
pm=p+m;
pcm=p+c+m;
if(((p>40)&&(c>50)&&(m>60))&&((pm>150)||(pcm>200)))
 printf("You are eligible");
else
 printf("You are not eligible");
}
