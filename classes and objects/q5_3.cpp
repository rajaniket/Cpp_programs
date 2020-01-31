//program to represent a bank account can handle up to 10 customers;
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
class bank{
string name,typ,pass;
int account_no; float balance;
public:
bank() {balance=0;}
void getdata(){
cout<<"\nAdd Name of Depositor: ";
cin.ignore();
getline(cin,name);
cout<<"Add type of account :";
getline(cin,typ);
cout<<"Add Account Number :";
cin>>account_no;
cout<<"Set your Password (e.g Abc#234@) "<<endl;
cin.ignore();
getline(cin,pass);
cout<<"Account is added sucessfully"<<endl;

}
void deposit(){
cout<<"Enter money to deposit: ";
float x;
cin>>x;
balance=x;
cout<<"Your current balance is "<<balance<<" rupees. "<<endl;
cout<<endl;
}
void withdraw(){
cout<<"\nYour current balance is "<<balance<<" rupees. "<<endl;
if(balance==0){
    cout<<"You don't have enough money to withdraw"<<endl;
}
else{
float drw;
cout<<"Enter amount to withdraw : ";
cin>>drw;
balance=balance-abs(drw);
cout<<"Your current balance is "<<balance<<" rupee. "<<endl;
}}
void display(){
cout<<"\nThe Name of depositor is "<<name<<endl;
cout<<"Account Type : "<<typ<<endl;
cout<<"Your current balance is "<<balance<<" rupees. "<<endl;
}
friend int srchacc(int a,bank s[]);
};
int srchacc(int a,bank s[]){
string k;
for(int i=0;i<=9;i++){
  if(s[i].account_no==a){
        cout<<"\t\t\ttype your password :";
        cin.ignore();
        getline(cin,k);
        cout<<"\n";
        if(k==s[i].pass)
        return i;
        else { cout<<"\t\t\tyour password is incorrect"<<endl; return 15;}}}
  cout<<"\t\t\tAccount Number not found or Incorrect Account number\n";
    return 15;

}

int main()
{
bank a[9];
int c=0,x=0;
while(x!=3){
cout<<"\nType 1: To add account\nType 2: Customers login (To Check balance,Deposit & withdraw)\nType 3: To exit\nChoose options : ";
cin>>x;
cout<<"\n";
switch(x){
case 1:
if(c==10){
cout<<"\nyou can't able to add more account(maximum accounts can added upto 10);"<<endl;
break; }
a[c].getdata();
c++;
break;

case 2:{
int u,k,h=0;
if(c==0){cout<<"\nThere is no account add yet \n"; break; }
cout<<"\t\t\tType your Account Number : ";
cin>>u;
cout<<"\n";
k=srchacc(u,a);
if(k==15){break;}
a[k].display();
while(h!=3){
cout<<"\n\t\t\tType 1: To Deposit \n\t\t\tType 2: To withdraw\n\t\t\tType 3: To Logout \nChoose options : ";
cin>>h;
cout<<"\n";
switch(h)
{
 case 1:
    a[k].deposit();
    break;
 case 2:
    a[k].withdraw();
    break;
 case 3:
    break;
}
}
break;}

case 3:
exit(0);
}
}}
