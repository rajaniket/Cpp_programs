// Example based on abstract class
#include"iostream"
using namespace std;
class shape{
protected:
    float height,width;
public:
    virtual float area()=0;     // defining virtual function
    void show_detail(){
    cout<<"Height="<<height<<"   Width="<<height<<endl;
    }
};
class rectangle:public shape{
public:
    float area(){return height*width;}
    rectangle(float h, float w){height=h;width=w;}
};
class triangle:public shape{
public:
    float area(){return height*width*0.5;}
    triangle(float h, float w){height=h;width=w;}
};
int main(){
//  shape c;    we can't make an object from class shape because it of abstract type, 
rectangle a(10,10);
triangle b(10,10);
cout<<"Area of rectangle="<<a.area()<<endl;
cout<<"Area of triangle="<<b.area()<<endl;
}
