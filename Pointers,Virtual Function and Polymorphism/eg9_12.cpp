// Virtual function
#include<iostream>
using namespace std;
class base{
    public:
    void show(){
    cout<<"Show base"<<endl;
    }
    virtual void display(){
    cout<<"Display base"<<endl;
    }
};

class derived:public base{
public:
    void show(){
    cout<<"Show Derived"<<endl;
    }
    void display(){
    cout<<"Display Derived"<<endl;
    }
};

int main(){
    base *ptr;    // run time polymorphism is achieved only when a virtual function is accessed through pointer to base class;
    base a;
    derived b;

    ptr=&a;
    ptr->show();
    ptr->display();
   cout<<"\nptr points to derived object\n"<<endl;
    ptr=&b;
    ptr->show();
    ptr->display(); //=> will show "Display Derived" because of virtual function ,if virtual function is not present there then it will show "Display base"
}
