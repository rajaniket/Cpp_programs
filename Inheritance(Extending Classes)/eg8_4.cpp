// Multiple inheritance
#include"iostream"
using namespace std;
class A{
protected:
int a;
public:
    void display_a(){cout<<"a="<<a<<endl;}
};
class B{
protected:
    int b;
public:
    void display_b(){cout<<"b="<<b<<endl;}
};

class C:public A,public B{
int c;
public:
    C(){}
    C(int x,int y,int z){a=x;b=y;c=z;}
    void display(){
        display_a();
        display_b();
        cout<<"c="<<c<<endl;
        }
};
int main(){
C v(1,2,3);
v.display();
v.display_a();
}
