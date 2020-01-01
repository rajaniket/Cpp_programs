//Binary operator overloading using friend function
// sum of two complex number using friend function 
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
   friend Complex operator+(Complex,Complex);

};
Complex operator+(Complex s,Complex t){
    Complex temp;
    temp.real=s.real+t.real;
    temp.img=s.img+t.img;
    return temp;
    }

int main(){
Complex c1(1.1,2.2),c2(3.3,4),c3;
cout<<"c1=";c1.display();
cout<<"c2=";c2.display();
c3=c1+c2;   // it is equivalent to c3=operator+(c1,c2) , in case of member function it is c3=c1.operator+(c2)
cout<<"c3=";c3.display();
}







