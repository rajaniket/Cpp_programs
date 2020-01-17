// Multilevel inheritance
#include<iostream>
using namespace std;
class student{
protected:
int roll;
public:
   void get_roll(){cout<<"Enter Roll Number: "<<endl; cin>>roll;}
   void show_roll(){cout<<"Roll No: "<<roll<<endl;}
};

class test:public student{
protected:
    float s1,s2;
public:
    void get_s1_2(){cout<<"Enter Marks-1 & Marks-2"<<endl; cin>>s1>>s2;}
    void put_marks(){cout<<"sub1="<<s1<<endl<<"sub2="<<s2<<endl;}
};
class result:public test{
private:
    float total;
public:
    result(){}
    result(int a,float b,float c){roll=a;s1=b;s2=c;}
    void display_total(){
    total=s1+s2;
    show_roll();
    put_marks();
    cout<<"Total="<<total<<endl;
    }

};
int main(){
result a(100,55.5,40);
a.display_total();

cout<<endl<<endl;      //second ways
result b;              
b.get_roll();
b.get_s1_2();
b.display_total();
}
