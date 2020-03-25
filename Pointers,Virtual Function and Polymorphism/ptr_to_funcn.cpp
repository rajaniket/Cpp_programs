// switch case type function using Pointers to Functions
// array of pointers to function

 #include<iostream>
 using namespace std;
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
 int (*foo[])(int,int)={add,sub,mul};   // array of pointers to function ,0->add,1->sub,2->mul
 int q,a=10,b=7;
 cout<<"Enter 1 for addition\nEnter 2 for subtraction\nEnter 3 for Multiplication"<<endl;
 cin>>q;
 if(q>0&&q<=3)
    cout<<"Result: "<<(*foo[q-1])(a,b)<<endl;
  else cout<<"Wrong key pressed"<<endl;
 }
