//initialization list in constructors

#include<iostream>
using namespace std;
class alpha{
protected:
    int x,q;    // x will initialized first then q will be  (initialization list)
public:
    alpha(int c):x(c),q(2*x){    // alpha(int c):q(2),x(q) , will be wrong because x will be initialize first then q will initialize as per
                                                                                                            // deceleration in data segment
    cout<<"alpha initialized"<<endl;
    }
    void show(){
        cout<<"X="<<x<<endl;
        cout<<"Q="<<q<<endl;
        }
    };

class beta{
protected:
    int y,w;
public:
    beta(int c):y(3*c),w(c+y){ // initializing y and w
    cout<<"beta initialized"<<endl;
    }
    void show(){
        cout<<"Y="<<y<<endl;
        cout<<"W="<<w<<endl;}
    };

class gamma:public beta,public alpha{
protected:
    int z,e;
public:
    gamma(int a,int b,int c):alpha(a),beta(b),z(x*4)
    {
    e=c;
    cout<<"gamma initialized"<<endl;
    }
    void show(){
    alpha::show();
    beta::show();
    cout<<"Z="<<z<<endl;
    cout<<"E="<<e<<endl;}
    };

int main(){
gamma kk(1,2,3);
kk.show();
}

