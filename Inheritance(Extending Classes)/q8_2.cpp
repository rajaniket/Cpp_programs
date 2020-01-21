#include"iostream"
#include"math.h"
#include"string"
#define charge 25  //
#define rate 0.08 //8%
#define min 3000
using namespace std;
class account{
protected:
    string *name,*acc_no,*type;
    int d,m,y;
    void account_details();
    void show();
};
account::account_details(){
    cout<<"Name :"<<endl;
    name=new string;
    cin>>*name;
    cout<<"Account Numbae :"<<endl;
    acc_no=new string;
    cin>>*acc_no;
    cout<<"Type: "<<endl;
    type=new string;
    cin>>*type;
    cout<<"Enter Today's date,month and year"<<endl;
    cin>>d>>m>>y;
    }
account::show(){
    cout<<"Name: "<<*name<<endl;
    cout<<"Account Number: "<<*acc_no<<endl;
    cout<<"Account Type: "<<*type<<endl;
    cout<<"Date of creation "<<d<<"/"<<m<<"/"<<y<<endl;
    }

class cur_acc:public account{
float balance=0;
public:
    friend void create_account();
    void show_balance();
    friend void withdraw();
    friend void deposit();
};

class sav_acc:public account{
float balance=0;
float interest_balance=0;
int d1,m1,y1;
public:
    friend create_account();
    void show_balance();
    friend void deposit();
    void interest();
   int cal_date(int d2,int m2,int y2);
};

sav_acc::cal_date(int d2,int m2,int y2){
int *month=new int[12]{31,28,31,30,31,30,31,31,30,31,30,31};   //defining no of days in each month

if(d1==d2&&m1==m2&&y1==y2)   // date is same
return 0;

else if(m1==m2&&y1==y2)     // same month so only difference in days
    return d2-d1;

else {                     // if month or year is not same
int days=month[m1-1]-d1;   // Calculating number of days remaining for complete m1 month
int h=m1+1;                // now from next month calculating days
for(int i=y1;i<=y2;i++){
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
    delete month[];
    return days;
}
}




sav_acc::interest(int d2,int m2,int y2){
int no_days;
no_days=cal_date(d2,m2,y2);
interest_balance=balance*rate*no_days/365;
}

void create_account(){
float *p=new float;
cout<<"Deposit an amount of 3000 rupee or more in order to open an account"<<endl;
cin>>*p;
if(*p>=3000){
    balance+=*p;
    account_details();
    show();
    show_balance();
}
else cout<<"Deposit at least 3000 rupee"<<endl;
}

sav_acc::show_balance(){cout<<"Your Current Balance :"<<balance+interest_balance<<endl;}

cur_acc::show_balance(){cout<<"Your Current Balance :"<<balance<<endl;}

void withdraw(){
float *p=new float;
cout<<"Enter Amount :"<<endl;
cin>>*p;
if(*p<balance)
    cout<<"Your Balance is Less than Withdrawal Amount,Transaction Unsuccessful"<<endl;
else
    if(balance==min){
            char *w=new char;
    cout<<"Your balance is "<<balance<<" minimum balance charges of "<<charge<<" rupee will be imposed if balance is less than minimum balance of "<<min<<" rupee"<<endl;
    cout<<"Do you want to withdraw ? \nPress Y for yes and N for cancel"<<endl;
    cin>>*w;
    if(*w==y||*w==Y){
    balance-=(*p);
    cout<<"Type Today's date"<<endl;
    cin>>d1>>m2>>y2;
    cout<<"Transaction Successful"<<endl;
    show_balance();}
    else cout<<"Transaction Canceled"<<endl;
    delete w;
}
 delete p;
}
void deposit(){
float *p=new float;
cout<<"Enter Amount :"<<endl;
cin>>*p;
balance+=*p;
show();
delete p;
}





