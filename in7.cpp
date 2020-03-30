//write a program to find super digit (method-1 using recursion)
/* super_digit(9875) = super_digit(9+8+7+5) 
= super_digit(29) 
= super_digit(2+9)
= super_digit(11)
= super_digit(1+1)
= super_digit(2)
= 2     */

#include <iostream>
using namespace std;
int super_digit(int a){
int k,l=0;
if(a<10)
    return a;
while(a!=0){
k=a%10;
a=a/10;
l=l+k;
}
super_digit(l);  //recursion
}
int main(){
cout<<"Type Number"<<endl;
int k,m;
cin>>k;
m=super_digit(k);
cout<<"Super digit : "<<m;
}
