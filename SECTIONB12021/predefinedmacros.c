#include<stdio.h>
//Pre defined macros are defined by ANSI C (ANSI  - American National Standards  Institute)
void main(void)
{
printf("%s\n",__TIME__); //Prints  the date the code was compiled
printf("%s\n",__DATE__); //Prints the time the code was compiled
printf("%d\n",__LINE__); //Print the current line number
printf("%s\n",__FILE__); //prints the file name
printf("%d\n",__STDC__); //It is defined as 1 when compiler compiles with ANSI standard
}
