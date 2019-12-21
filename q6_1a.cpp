//Represent a bank account using constructor
#include <iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;
class account{
    int *acc_no;
    string *type,*name;
    float *balance;
public:
account(string n,string typ,int acc,float bal){
acc_no=new int(acc);
balance=new float(bal);
name=new string(n);
type=new string(typ);
}
void deposit(float a){
*balance=(*balance)+a;
}
void withdraw(float b){
*balance=(*balance)-b;
}
void display(){
cout<<"Name: "<<*name<<"\nType: "<<*type<<"\nAccount number: "<<*acc_no<<"\nCurrent Balance: "<<*balance<<endl;
}
~account(){
delete acc_no;
delete balance;
delete name;
delete type;
cout<<"\n\nDestructor called"<<endl;
}
};
int main(){
account A("Aniket_Raj","Saving",12345,500.00);
A.display();
cout<<"\nAfter Withdrawal"<<endl;
A.withdraw(200);
A.display();
cout<<"\nAfter deposit 500"<<endl;
A.deposit(500);
A.display();
}

