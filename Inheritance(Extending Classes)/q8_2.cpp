/* Assume that a bank maintains two kinds of accounts for customers, one called as
savings and the other as current account. The savings account provides compound interest
and withdrawal facilities but no cheque book facility. The current account provides cheque
book facility but no interest. Current account holders should also maintain a minimum
balance and if the balance falls below this level a service charge is imposed.
Create a class account that stores customer name, account number and type of account.
From this derive the classes cur_acct and sav_acct to make them more specific to their
requirements. Include necessary member functions in order to achieve the following tasks:
(a) Accept the deposit from a customer and update the balance.
(b) Display the balance.
(c) Compute and deposit interest.
(d) Permit withdrawal and update the balance.
(e) Check for the minimum balance, impose penalty, necessary and update the balance.
        use constructors to initialize
*/



#include<iostream>
#include<string.h>
#define charge 25  //
#define rate 0.08 //8%
#define min 3000
using namespace std;
class account{
protected:
    account(string n,string acc,string typ,int dd,int mm,int yy);
    string *name,*acc_no,*type;
    int d,m,y;
    void show();
};
    account::account(string n,string acc,string typ,int dd,int mm,int yy){
    name=new string(n);
    acc_no=new string(acc);
    type=new string(typ);
    d=dd;m=mm;y=yy;
    }
void account::show(){
    cout<<"Name: "<<*name<<endl;
    cout<<"Account Number: "<<*acc_no<<endl;
    cout<<"Account Type: "<<*type<<endl;
    cout<<"Date of creation "<<d<<"/"<<m<<"/"<<y<<endl;
    }

class sav_acc:public account{
float balance=0;
int cal_date(int d2,int m2,int y2);
public:
    sav_acc(float bal,string n,string acc,string typ,int dd,int mm,int yy);
    void show_all();
    void show_balance();
    void deposit();
    void withdraw();
    void interest(int d2,int m2,int y2);

};

   sav_acc::sav_acc(float bal,string n,string acc,string typ,int dd,int mm,int yy):account(n,acc,typ,dd,mm,yy){
    balance=bal;}

class cur_acc:public account{
float balance=0;
public:
     cur_acc(float bal,string n,string acc,string typ,int dd,int mm,int yy);
     void show_balance();
     void show_all();
     void withdraw();
     void deposit();
};
    cur_acc::cur_acc(float bal,string n,string acc,string typ,int dd,int mm,int yy):account(n,acc,typ,dd,mm,yy){
    balance=bal;}

sav_acc::cal_date(int d2,int m2,int y2){
int *month=new int[12]{31,28,31,30,31,30,31,31,30,31,30,31};   //defining no of days in each month

if(d==d2&&m==m2&&y==y2)   // date is same
return 0;

else if(m==m2&&y==y2)     // same month so only difference in days
    return d2-d;

else {                     // if month or year is not same
int days=month[m-1]-d;   // Calculating number of days remaining for complete m1 month
int h=m+1;                // now from next month calculating days
for(int i=y;i<=y2;i++){
    for(int j=h;j<=12;j++){
        if(i==y2&&j==m2){    // in last month (month that is described in your 2nd date) only adding the days
        days+=d2;
        break;
        }
        else{
        days+=month[j-1];   //  simply summing all the months
        }
    }
    h=1;                   // when year changes (j reset) it will start from month 1st=> January
    }
    delete []month;
    return days;
}
}


void sav_acc::interest(int d3,int m3,int y3){
int *no_days;
float *bal;
no_days=new int;
bal=new float;
*no_days=cal_date(d3,m3,y3);
cout<<"Number of days: "<<*no_days<<"\nInterest Rate: "<<rate<<endl;
cout<<"Interest From Date "<<d<<"/"<<m<<"/"<<y<<" To date "<<d3<<"/"<<m3<<"/"<<y3<<endl;
*bal=(balance*rate*(*no_days))/(float)365.0;
cout<<"Interest balance= "<<*bal<<endl;
delete no_days;
delete bal;
}



void sav_acc::show_balance(){cout<<"Your Current Balance :"<<balance<<endl;}
void cur_acc::show_balance(){cout<<"Your Current Balance :"<<balance<<endl;}

void sav_acc::show_all(){
show();
show_balance();
}

void cur_acc::show_all(){
show();
show_balance();
}
void sav_acc:: withdraw(){
float *p=new float;
cout<<"Enter Amount :"<<endl;
cin>>*p;
if(*p>balance){
    cout<<"Your Balance is Less than Withdrawal Amount,Transaction Unsuccessful"<<endl;}
else if(balance==min){
            char *w=new char;
    cout<<"Your balance is "<<balance<<" minimum balance charges of "<<charge<<" rupee will be imposed if balance is less than minimum balance of "<<min<<" rupee"<<endl;
    cout<<"Do you want to withdraw ? \nPress Y for yes and N for cancel"<<endl;
    cin>>*w;
    if(*w=='y'||*w=='Y'){
    balance-=(*p);
    cout<<"Transaction Successful"<<endl;
    show_balance();}
    else cout<<"Transaction Canceled"<<endl;
    delete w;
}
else {
    balance-=(*p);
    cout<<"Transaction Successful"<<endl;}
 delete p;
}

void cur_acc:: withdraw(){
float *p=new float;
cout<<"Enter Amount :"<<endl;
cin>>*p;
if(*p>balance){
    cout<<"Your Balance is Less than Withdrawal Amount,Transaction Unsuccessful"<<endl;}
else if(balance==min){
            char *w=new char;
    cout<<"Your balance is "<<balance<<" minimum balance charges of "<<charge<<" rupee will be imposed if balance is less than minimum balance of "<<min<<" rupee"<<endl;
    cout<<"Do you want to withdraw ? \nPress Y for yes and N for cancel"<<endl;
    cin>>*w;
    if(*w=='y'||*w=='Y'){
    balance-=(*p);
    cout<<"Transaction Successful"<<endl;
    show_balance();}
    else cout<<"Transaction Canceled"<<endl;
    delete w;
}
else {
    balance-=(*p);
    cout<<"Transaction Successful"<<endl;}
 delete p;
}

void sav_acc::deposit(){
float *p=new float;
cout<<"Enter Amount :"<<endl;
cin>>*p;
balance+=*p;
show();
delete p;
}

void cur_acc::deposit(){
float *p=new float;
cout<<"Enter Amount :"<<endl;
cin>>*p;
balance+=*p;
show();
delete p;
}

int main(){

cur_acc ani(4000,"aniket","12345","current",1,1,2019);
cout<<"Current Account"<<endl;
ani.show_all();
cout<<"\n\nDeposit \n\n"<<endl;
ani.deposit();
cout<<"\n\ Withdraw \n\n"<<endl;
ani.withdraw();
cout<<"\n\ show balance \n\n"<<endl;
ani.show_balance();

sav_acc raj(4000,"Aniket","12345","current",1,1,2019);
cout<<"\n\nSaving Account"<<endl;
raj.show_all();
cout<<"\n\nDeposit \n\n"<<endl;
raj.deposit();
raj.show_balance();
cout<<"\n\ Withdraw \n\n"<<endl;
raj.withdraw();
cout<<"\n\ show balance \n\n"<<endl;
raj.show_balance();
cout<<"\n\ interest \n\n"<<endl;
raj.interest(1,1,2020);        // date should new as compared to account creation date

}





