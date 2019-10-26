// program to convert decimal number to binary
#include <iostream>
using namespace std;
int dec_bin(int a){
int k,l=0;
while(a!=0){
k=a%2;
a=a/2;
l=l*10+k;
}
return l;
}

int main(){
cout<<"Type Number"<<endl;
int k,m;
cin>>k;
m=dec_bin(k);
cout<<"Binary number of "<<k<<" is : "<<m;
}
