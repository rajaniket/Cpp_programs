//program to represent a bank account can handle up to 10 customers;
#include<iostream>
using namespace std;
class bank{
string name,typ;
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
cout<<endl;
}
void deposit(){
cout<<"Enter money to deposit: ";
float x;
cin>>x;
balance=x;
cout<<endl;
}
void withdraw(){
cout<<"\nYour current balance is "<<balance<<" rupee. "<<endl;
float drw;
cout<<"Enter amount to withdraw : ";
cin>>drw;
balance=balance-drw;
cout<<"Your current balance is "<<balance<<" rupee. "<<endl;
}
void display(int a){
cout<<"\nThe Name of depositor is "<<name<<endl;
cout<<"Account Type : "<<typ<<endl;
cout<<"Your current balance is "<<balance<<" rupee. "<<endl;
}
};
int main()
{
bank a[9];

int c=0,x=0;
while(x!=5){
cout<<"\nType 1: To add account \nType 2: To Deposit an ammount\nType 3: To withdraw an ammount\nType 4: To display details\nType 5: To exit"<<endl;
cin>>x;
switch(x){
case 1:
a[c].getdata();
c++;
break;
case 2:
a[c].deposit();
break;
case 3:
a[c].withdraw();
break;
case 4:
a[c].display();
break;
case 5:
exit(0);
}
}}
