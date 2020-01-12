//Define two classes Polar and Rectangle to represent points in the polar and rectangle systems. 
//Use conversion routines to convert from one system to the other.
//method use=> operator function
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
operator rectangle();
};
class rectangle{
float x,y;
public:
rectangle(){x=0;y=0;}
rectangle(float a,float b)
{
    x=a;y=b;
}
void show(){
cout<<"x+iy="<<x<<"+i("<<y<<")"<<endl;
}
operator polar();
};
polar::operator rectangle(){
float s;
s=(radius*cos(angle));
float d;
d=(radius*sin(angle));
rectangle temp(s,d);
return temp;
}
rectangle::operator polar(){
float r=sqrt(x*x+y*y);
float a=atan(y/x);
polar p(r,a);
return p;
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





