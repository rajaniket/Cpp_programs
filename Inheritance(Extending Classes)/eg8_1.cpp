#include"iostream"
using namespace std;
class A{
int a;
public:
    int b;
    A(){a=7;b=7;}
    A(int l,int m){a=l;b=m;}
    void show1(){cout<<"a="<<a<<"   b="<<b<<endl;}
    int geta(){return a;}
};
class B:public A{
int c;
public:
    B(){b=4,c=5;}
    void show(){cout<<"c="<<c<<endl;}
    void showall(){cout<<"a="<<geta()<<"   b="<<b<<"   c="<<c<<endl;}
};

int main(){
//A n(7,8);
B f;
f.showall();
f.show1();



}
