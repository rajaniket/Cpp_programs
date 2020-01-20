#include"iostream"
#include"math.h"
#include"string"
#define charge 25  //
#define rate 0.08 //8%
#define min 500
using namespace std;
class account{
protected:
    string *name,*acc_no,*type;
    void account_details();
    void show();
};
account::void account_details(){
    cout<<"Name :"<<endl;    
    name=new string;
    cin>>*name;
    cout<<"Account Numbae :"<<endl;
    acc_no=new string;
    cin>>*acc_no;
    cout<<"Type: "<<endl;    
    type=new string;
    cin>>*type;
    }
account::void show(){
    cout<<"Name: "<<*name<<endl;
    cout<<"Account Number: "<<*acc_no<<endl;
    cout<<"Account Type: "<<*type<<endl;
    }

class cur_acc:public account{
float balance=0;
public:
    void create_account();
    friend void show_balance();
    friend void withdraw();
    friend void deposite();
};

class sav_acc:public account{
float balance=0;
int d,m,y;
public:
    friend void show_balance();
    friend void deposite();
    void interest();
    int cal_date(int d1,int m1,int y1);
};




void show_balance(){cout<<"Your Current Balance :"<<balance<<ebdl;}

void withdraw(){
float *p=new float;
cout<<"Enter Amount :"<<endl;
cin>>*p;
if(*p<balance)
    cout<<"Your Balance is Less than Withdrawal Amount,Transaction Unsuccessful"<<endl;
else 
    if(balance==min){
            char *w=new char;
    cout<<"Your balance is "<<balance<<" minimum balance charges of "<<charge<<" rupee will be imposed if balance is less than minimum balance of "<<min<<" rupee<<endl;
    cout<<"Do you want to withdraw ? \nPress Y for yes and N for cancel"<<endl;
    cin>>*w;
    if(*w==y||*w==Y){
    balance-=(*p);
    cout<<"Transaction Successful"<<endl;
    show_balance();}
    else cout<<"Transaction Canceled"<<endl;
    delete w;
}
 delete p;
}
void deposite(){
float *p=new float;
cout<<"Enter Amount :"<<endl;
cin>>*p;
balance+=*p;
show();
}





