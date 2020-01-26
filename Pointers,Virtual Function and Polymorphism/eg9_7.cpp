// Example on pointers to function;
#include<iostream>
#include<string.h>
using namespace std;
typedef int (*ptr)(int,int);  // typedef is used to give new name to data type or functions
                              // int (*ptr)(int,int); it is pointers to function 
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
cout<<h(2,5)<<endl;
h=&sub;
cout<<h(10,5)<<endl;
h=&mul;
cout<<h(45,2)<<endl;
}
