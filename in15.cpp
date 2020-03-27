//find out greatest among three using conditional operator

#include <iostream>
using namespace std;
float comp(float a,float b,float c){
//(a>b) ? (a>c) ? return a : return b : (b>c) ? return b : return c; // this is wrong because "return a" is a statement not an expression
return (a>b) ? (a>c) ? a : b : (b>c) ? b : c;
}
int main(){

float a,b,c;
cout<<"Type three numbers :";
cin>>a>>b>>c;
cout<<"\nThe greatest among three is: "<<comp(a,b,c);
}
