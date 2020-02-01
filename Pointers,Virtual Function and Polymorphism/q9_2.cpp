/*  Extend the q9.1 program to display the area of circles. This requires addition of a
new derived class ‘circle’ that computes the area of a circle. Remember, for a circle we need
only one value, its radius, but the get_data() function in base class requires two values to be
passed.(Hint: Make the second argument of get_data() function as a default one with zero
value.) */

#include<iostream>
using namespace std;
class shape{
    protected:
double height,width,radius;
public:
    void get_data(double h,double w){
    height=h;width=w;
    }
    void get_data(double r=0){
    radius=r;
    }
    virtual double area()=0;

};
class rectangle:public shape{
public:
    double area(){
    return height*width;
    }
};
class circle:public shape{
public:
    double area(){
    return 3.14*radius*radius;
}};
class triangle:public shape{
public:
    double area(){
    return height*width*0.5;
    }};

int main(){
shape *p;
rectangle a;
triangle b;
circle c;
p=&a;
cout<<"Press hight and width "<<endl;
double x,y;
cin>>x>>y;
p->get_data(x,y);
cout<<"Area of Rectangle is : "<<p->area()<<endl;
p=&b;
p->get_data(x,y);
cout<<"Area of triangle is : "<<p->area()<<endl;
p=&c;
cout<<endl;
cout<<"Enter radius"<<endl;
cin>>x;
p->get_data(x);
cout<<"Area of circle is : "<<p->area()<<endl;
}
