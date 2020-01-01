#include<iostream>
using namespace std;
class Complex{
float real,img;
public:
    Complex(float r,float i){
    real=r; img= i;
    }
    Complex(){
    real=0; img=0;
    }

    void display(){
    cout<<real<<" + "<<"j"<<img<<endl;
    }
    Complex operator+(Complex);

};
Complex Complex::operator+(Complex t){
    Complex temp;
    temp.real=real+t.real;
    temp.img=img+t.img;
    return temp;
    }

int main(){
Complex c1(1.1,2.2),c2(3.3,4),c3;
cout<<"c1=";c1.display();
cout<<"c2=";c2.display();
cout<<"c3=";c3.display();
c3=c1+c2;
cout<<"c3=";c3.display();
}







