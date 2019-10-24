//To Swap the values of two variables without using any extra variable (method-2)
#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"Enter 1st Number"<<endl;
cin>>a;
cout<<"Enter 2nd Number"<<endl;
cin>>b;
a=a+b;
b=a-b;
a=a-b;
cout<<"1st number is "<<a<<"\n2nd number is "<<b<<endl;
}
