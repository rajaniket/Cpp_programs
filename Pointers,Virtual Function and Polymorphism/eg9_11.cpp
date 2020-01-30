// Pointers to derived class

#include<iostream>
using namespace std;
class base{
    public:
    int x;
    void show(){
    cout<<"X="<<x<<endl;
    }
};

class derived:public base{
public:
    int y;
    void show(){
    cout<<"X="<<x<<endl;
    cout<<"Y="<<y<<endl;
    }
};

int main(){
base *Bptr;
base a;
derived b;
Bptr=&a;
Bptr->x=5;
Bptr->show();
// ptr->y;  will give error because y is not present in base class
Bptr=&b;
Bptr->x=10;
Bptr->show();
// ptr->y=50;  error because using ptr we can only access those members which are inherited from base class not the members
                // that originally belongs to Derived class ,for accessing original member of derived class ,we have to use another pointer of derived type
derived *Dptr;
Dptr=&b;
Dptr->x=15;
Dptr->y=2;
Dptr->show();
// or we can access original member of derived class using Bptr that is pointing to base class by typecasting it into derived class
((derived *)Bptr)->x=55;
((derived *)Bptr)->y=99;
((derived *)Bptr)->show();
}
