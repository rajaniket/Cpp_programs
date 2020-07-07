/*

Macros are a piece of code in a program which is given some name. Whenever this name is encountered by the compiler the compiler replaces the name with the actual piece of code.
*/

#include<stdio.h>
#define M1(p) (p*p)
#define SQUARE(n) ((n)*(n))
int main(){
int a=M1(5+5);  // it gives 35 because (5+5*5+5)=35
printf("%d\n",a);

int j = 64/SQUARE(4);    //surprisingly, it prints out j = 64 instead of j = 4. Because j = 64/4*4 but not j = 64/(4*4). replace square(4) with n*n then solve
}
