// example based on Hybrid inheritance
#include"iostream"
using namespace std;
class student{
protected:
    int roll;
public:
    void display(){
    cout<<"Roll="<<roll<<endl;
    }
};
class test:public student{
protected:
    float sub1,sub2;
public:
    void display(){
    cout<<"Sub1="<<sub1<<"   "<<"Sub2="<<sub2<<endl;
    }
};
class sports{
protected:
    float score;
public:
    void display(){
    cout<<"Sports="<<score<<endl;
    }
};
class result:public test,public sports{
float total;
public:
    result(int a,int b,int c,int d){
    roll=a;
    sub1=b;
    sub2=c;
    score=d;
    }
    display(){
    student::display();
    test::display();
    sports::display();
    total=sub1+sub2+score;
    cout<<"Sports="<<score<<endl;
    cout<<"Total="<<total<<endl;
    }};
int main(){
result w(12,30,30,50);
w.display();
}
