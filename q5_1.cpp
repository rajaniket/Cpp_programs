//Program to represent a bank account

#include<iostream>
using namespace std;
class bank{
string name,typ;
int account_no; float balance;
public:
bank() {balance=0;}
void getdata(){
cout<<"\nAdd Name of Depositor: ";
getline(cin,name);
cout<<"Add type of account :";
getline(cin,typ);
}
void deposit(float x){
balance=x; }
void withdraw(){
cout<<"\nYour current balance is "<<balance<<" rupee. "<<endl;
float drw;
cout<<"Enter amount to withdraw : ";
cin>>drw;
balance=balance-drw;
cout<<"Your current balance is "<<balance<<" rupee. "<<endl;
}
void display(){
cout<<"\nThe Name of depositor is "<<name<<endl;
cout<<"Account Type : "<<typ<<endl;
cout<<"Your current balance is "<<balance<<" rupee. "<<endl;
}
};
int main()
{
bank a;
a.getdata();
a.display();
cout<<"After Deposit"<<endl;
a.deposit(5000);
a.display();
a.withdraw();
a.display();
}

