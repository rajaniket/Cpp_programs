#include<iostream>
#include<string.h>
using namespace std;
typedef void (*ptr)(int,int);
 int add(int a,int b){
  return a+b;
 }
 int sub(int a,int b){
 return a-b;
 }
 int mul(int a,int b){
 return a*b;
 }
int main(){
ptr h;
h=&add;
cout<<*h(2,5)<<endl;
h=&sub;
cout<<h(10,5)<<endl;
h=&mul;
cout<<h(45,2)<<endl;
}
