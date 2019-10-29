overloaded constructor example, sum of two complex number.
#include<iostream>
using namespace std;
class complex {
float r,l;
public:
complex(){
r=0;
l=0;
}
complex(float a){r=l=a;}
complex(float a,float b){
r=a;
l=b;
}
void display(){
cout<<r<<"+j"<<l<<endl;
}
friend complex sum(complex f,complex g);
};
complex sum(complex f,complex g){
complex temp;
temp.r=f.r+ g.r;
temp.l=f.l+g.l;
return temp;
}
int main()
{
complex a(2,5.5);
complex b(6.6);
complex c;
c=sum(a,b);
a.display();
b.display();
c.display();
}
