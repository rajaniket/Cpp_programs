// Design a class Polar which describes a point in the plane using polar coordinates radius and angle.
#include <iostream>
#include<cmath>
using namespace std;
class polar{
    float radius,angle,x,y;
public:
    polar(){radius=0;angle=0; x=radius*cos(angle);y=radius*sin(angle);}
    polar(float m,float a)
    {
        radius=m; angle=a;
         x=radius*cos(angle);
         y=radius*sin(angle);
        }
    void show(){
    cout<<"Radius = "<<radius<<endl;
    cout<<"Angle = "<<angle<<endl;
    cout<<"(x,y)=("<<x<<","<<y<<")"<<endl;
    }
    polar operator +(polar h){
    polar temp;
    temp.x=x+h.x;
    temp.y=y+h.y;
    temp.radius=sqrt(temp.x*temp.x+temp.y*temp.y);
    temp.angle=atan(temp.y/temp.x);
    return temp;
    }};

int main(){
polar a(5,3.14/2),b(10,3.14/2);
polar c;
c=a+b;
a.show();
cout<<endl;
b.show();
cout<<endl;
c.show();
}
