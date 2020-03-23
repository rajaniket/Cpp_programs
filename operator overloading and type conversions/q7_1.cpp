//Crate a class FLOAT that contains one float data member.
//Overload all the four arithmetic operators so that they operate on the objects of FLOAT.
#include <iostream>
using namespace std;
class FLOAT{
float num;
public:
FLOAT(){num=0;};
FLOAT(float a){num=a;}
float operator+(FLOAT k){
return num+k.num;
}
float operator-(FLOAT k){
return num-k.num;
}
float operator*(FLOAT k){
return num*k.num;
}
float operator/(FLOAT k){
return num/k.num;
}
operator float()
{return num;}
};
int main(){
FLOAT a(100),b(10),c;
cout<<"a="<<a<<endl<<"b="<<b<<endl<<"c="<<c<<endl;
c=a+b;
cout<<"a+b="<<c<<endl;
c=a-b;
cout<<"a-b="<<c<<endl;
c=a*b;
cout<<"a*b="<<c<<endl;
c=a/b;
cout<<"a/b="<<c<<endl;
}

