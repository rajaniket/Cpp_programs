// Constructors in derived class
#include<iostream>
using namespace std;
class alpha{
protected:
    int x;
public:
    alpha(int c){
    x=c;
    cout<<"alpha initialized"<<endl;
    }
    void show(){cout<<"X="<<x<<endl;}
    };

class beta{
protected:
    int y;
public:
    beta(int c){
    y=c;
    cout<<"beta initialized"<<endl;
    }
    void show(){cout<<"Y="<<y<<endl;}
    };

class gamma:public beta,public alpha{
protected:
    int z;
public:
    gamma(int a,int b,int c):alpha(a),beta(b)
    {
    z=c;
    cout<<"gamma initialized"<<endl;
    }
    void show(){
    alpha::show();
    beta::show();
    cout<<"Z="<<z<<endl;}
    };

int main(){
gamma kk(1,2,3);
kk.show();
}

