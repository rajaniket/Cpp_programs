//mathematical operation of complex number using unary and binary operator overloading
#include"iostream"
#include"math.h"
using namespace std;
class complex{
    float real,img;
public:
    complex(int r,int i){
    real=r;
    img=i;
    }
        complex(){real=0;img=0;}
    void display(){cout<<"x+iy=="<<real<<"+i("<<img<<")";}
        complex operator +(complex x){
    complex temp;
    temp.real=real+x.real;
    temp.img=img+x.img;
    return temp;
    }
        complex operator -(complex x){
    complex temp;
    temp.real=real-x.real;
    temp.img=img-x.img;
    return temp;
    }
        complex operator *(complex x){
    complex temp;
    temp.real=(real*x.real)-(img*x.img);
    temp.img=(real*x.img)+(img*x.real);
    return temp;
    }
    void operator -(){
    real=-real;
    img=-img;
    }
    };
    int main(){
    complex c,a(1,2),b(-1,-3);
    cout<<"a=";a.display();cout<<endl;
    cout<<"b=";b.display();cout<<endl;
    c=a+b;
    cout<<"a+b=";c.display();cout<<endl;
    c=a-b;
    cout<<"a-b=";c.display();cout<<endl;
    c=a*b;
    cout<<"a*b=";c.display();cout<<endl;
    -c;
    c.display();
    }
