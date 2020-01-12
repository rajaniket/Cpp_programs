//Define two classes Polar and Rectangle to represent points in the polar and rectangle systems. 
//Use conversion routines to convert from one system to the other.
//method use=> constructor
#include"iostream"
#include"math.h"
using namespace std;
class rectangle;
class polar{
float radius,angle;
public:
polar(){radius=0;angle=0;}
polar(float p,float a){radius=p;angle=a;}
void show(){cout<<"Radius="<<radius<<"  Angle="<<angle<<endl;}
polar(rectangle a);
float rvalue(){return radius;}
float avalue(){return angle;}
};
class rectangle{
float x,y;
public:
rectangle(){x=0;y=0;}
rectangle(float a,float b)
{
    x=a;y=b;
}
rectangle(polar f);
float xvalue(){return x;}
float yvalue(){return y;}
void show(){
cout<<"x+iy="<<x<<"+i("<<y<<")"<<endl;
}
};
polar::polar(rectangle a){
radius=sqrt(a.xvalue()*a.xvalue()+a.yvalue()*a.yvalue());
angle=atan(a.yvalue()/a.xvalue());
}
rectangle:: rectangle(polar f){
x=(f.rvalue()*cos(f.avalue()));
y=(f.rvalue()*sin(f.avalue()));
}
int main(){
   polar a(20,3.14),b;
   rectangle c(1,1), d;
   a.show();
   d=a;
   d.show();
   b=c;
   c.show();
   b.show();
}





