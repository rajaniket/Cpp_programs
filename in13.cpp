//Conversion of hexadecimal number to decimal
#include<iostream>
using namespace std;
void HtoD(int a){
int b,i=0;
char c[10];
while(a!=0){
    b=a%16;
    a=a/16;
    if(b<10)
    c[i]=(b+48);
    else
    c[i]=(b+55);
    i++;

}
for(int k=(i-1);k>=0;k--){

        cout<<c[k];
}

}
int main(){
int a=32;
HtoD(a);
}
