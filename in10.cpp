// Program to Convert a Given Binary Number to its Decimal Equivalent.
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int bin_dec(int a){
int l=0,k,c=0;
while(a!=0){
  k=a%10;
  if((k!=1)&&(k!=0) ){
 cout<<"you have entered wrong decimal number"<<endl;
   exit(0);}
  a=a/10;
  l=l+k*pow(2,c);
  c++;
}
return l;
}

int main ()
{
    int num,dec;
    cout << "Enter the binary number : ";
    cin >> num;
    dec=bin_dec(num);
    cout << "The decimal equivalent of " << num << " is " << dec;
}
