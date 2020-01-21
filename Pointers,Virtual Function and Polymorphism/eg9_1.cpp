// Example of using pointers (explaining pointers)
#include<iostream>
using namespace std;
int main(){
int *p,**p1,a=98;
p=&a;
p1=&p;
cout<<"The address of a : "<<p<<endl;
cout<<"The address of p : "<<p1<<endl;
cout<<"The pointer p points to value :"<<*p<<endl;
cout<<"the pointer p1 stores: "<<*p1<<endl;
cout<<"The pointer p1 points to value :"<<**p1<<endl;

p++;
p++;
p1++;
p1++;
cout<<"The address of a : "<<p<<endl;
cout<<"The address of p : "<<p1<<endl;
cout<<"The pointer p points to value :"<<*p<<endl;
cout<<"the pointer p1 stores: "<<*p1<<endl;
cout<<"The pointer of pointer p1 points to value :"<<**p1<<endl;

}
