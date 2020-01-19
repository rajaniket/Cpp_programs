// Nesting  or containership
#include<iostream>
using namespace std;
class car{
float mileage,power;
public:
    car(){};
    car(float a,float b){mileage=a;power=b;}

    void show(){
    cout<<"Milege="<<mileage<<"  Power="<<power<<endl;
    }
};

class name{
string model;
public:
    car spec;     // object of class car is inside name class 
    name(string p,float q,float s):spec(q,s){
    model=p;
    }
    void show(){
    cout<<"Model="<<model<<endl;
    spec.show();
    }

};

int main(){
name al("alto",23,1000);
al.show();

}
