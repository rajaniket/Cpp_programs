// q8.3 of Balagurusamy
//all four classes are connected in a loop

#include"iostream"
using namespace std;
class person{
protected:
    string name;
    int code;
};
class account:virtual public person{
protected:
    string pay;
};
class admin:public virtual person{
protected:
    string experience;
};
class master:public account,public admin{
public:
    master(string n,int c,string p,string exp){
    name=n;code=c;pay=p;experience=exp;
    }
    void display(){
    cout<<"Name : "<<name<<"\nCode : "<<code<<"\nPay : "<<pay<<"\nExperience : "<<experience<<endl;

    }

};
int main(){
master A("Aniket",1050,"15500 Rupees","4 year");
A.display();
}
