//minus unary operator overloading using friend function
#include<iostream>
using namespace std;
class abc{
int x,y;
public:
    abc(int a,int b){
    x=a; y=b;
    }
    void display(){
    cout<<"X="<<x<<"    "<<"Y="<<y<<endl;
    }
    friend void operator-(abc &a);


};
void operator-(abc &a) // - operator overloading 
    {
        a.x=-a.x;
        a.y=-a.y;

    }
int main(){
abc s1(20,30);
cout<<"Before using unary operator "<<endl;
s1.display();
-s1;
cout<<"After using unary operator "<<endl;
s1.display();
}




