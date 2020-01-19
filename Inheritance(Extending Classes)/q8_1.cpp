#include"iostream"
using namespace std;
class account{
protected:
    string *name,*acc_no,*type;
public:
    account(string a,string b,string c){
    name=new string(a);
    acc_no=new string(b);
    type=new string(c);
    }
    void show(){
    cout<<"Name: "<<*name<<endl;
    cout<<"Account Number: "<<*acc_no<<endl;
    cout<<"Account Type: "<<*type<<endl;
    
    }
};

class cur_acc{
float balance;


};
