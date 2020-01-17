//Single inheritance : Private
#include"iostream"
using namespace std;
class A{
    int a;
public:
    int b;
    void get_a_b(){cout<<"enter a and b"<<endl;
    cin>>a>>b;
    }
  void show1(){cout<<"a="<<a<<"   b="<<b<<endl;}
  int puta(){return a;}
};

class B:private A{
int c;
public:
    void multiply(){
   // c=a*b;  // a can't be inherited because a is private in base class
    get_a_b();
    c=puta()*b;
    }
    void show_all(){cout<<"a="<<puta()<<"   b="<<b<<"   c="<<c<<endl;}

};
int main(){
B j;
//j.get_a_b();   
//j.show1();   these are private for class B and can only access through class A
j.multiply();
j.show_all();
}
