//example of overloading a unary operator using member function
// unary minus operator 
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
    void operator-()
    {
        x=-x;
        y=-y;

    }

};
int main(){
abc s1(20,30);
cout<<"Before using unary operator "<<endl;
s1.display();
-s1;
cout<<"After using unary operator "<<endl;
s1.display();
}




