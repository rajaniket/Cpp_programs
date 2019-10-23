//To check if two numbers are equal without using arithmetic operators or comparison operators.

#include<iostream>
using namespace std;
int main(){
int x,y;
cout<<"Enter 1st Number"<<endl;
cin>>x;
cout<<"Enter 2nd number"<<endl;
cin>>y;
if(x^y)
cout<<x<<" and "<<y<<" are not equal"<<endl;
else
cout<<x<<" and "<<y<<" are equal"<<endl;
}
