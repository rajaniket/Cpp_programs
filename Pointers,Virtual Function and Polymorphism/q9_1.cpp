/*Create a base class called shape. Use this class to store two double type values that
could be used to compute the area of figures. Derive two specific classes called triangle and
rectangle from the base shape. Add to the base class, a member function get_data() to
initialize base class data members and another member function display_area() to compute
and display the area of figures. Make display_area() as a virtual function and redefine this
function in the derived classes to suit their requirements.
Using these three classes, design a program that will accept dimensions of a triangle or a
rectangle interactively, and display the area.
Remember the two values given as input will be treated as lengths of two sides in the case of
rectangles and as base and height in the case of triangles, and used as follows:
Area of rectangle = x * y
Area of triangle = ½ * x * y */

#include<iostream>
using namespace std;
class shape{
    protected:
double height,width;
public:
    void get_data(double h,double w){
    height=h;width=w;
    }
    virtual double area()=0; // virtual function should declear inside base class

};
class rectangle:public shape{
public:
    double area(){
    return height*width;
    }
};
class triangle:public shape{
public:
    double area(){
    return height*width*0.5;
    }
};
int main(){
shape *p;
rectangle a;
triangle b;
p=&a;
cout<<"Press hight and width "<<endl;
double x,y;
cin>>x>>y;
p->get_data(x,y);
cout<<"Area of Rectangle is : "<<p->area()<<endl;
p=&b;
p->get_data(x,y);
cout<<"Area of triangle is : "<<p->area()<<endl;
}
