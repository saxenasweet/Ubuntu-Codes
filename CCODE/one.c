#include<stdio.h>
#include<string.h>
struct S {
char S[4];
};
int main(void) {
 struct S S={'a','b'};
printf("%d",sizeof(S.S));
//printf("%d",sizeof(S.S)-strlen(S.S)+S.S[3]);
return 0;
}
