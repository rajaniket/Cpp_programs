//conversion of one class to another class using cast operator function 
//inventory of products in store 
#include <iostream>
using namespace std;
class type2{
int code;
float value;
public:
    type2(int c,float v){code=c; value=v;}
    type2(){code=0; value=0;}
    void show(){cout<<"Code : "<<code<<endl<<"Value : "<<value;}
};

class type1{
int code;
int items;
float price;
public:
    type1(int c,int i,float f){code=c; items=i; price=f;}
    type1(){code=0; items=0; price=0;}
    void show(){
    cout<<"Code : "<<code<<endl<<"Items : "<<items<<endl<<"Value : "<<items*price<<endl;
    }
  //  int putcode(){return code;}
   operator float(){return price*items;}

    operator type2(){
    type2 temp(code,price*items);
    return temp;
    }
    };


int main(){
type1 a(100,5,140);
type2 b;
float netvalue;
netvalue=a;
b=a;
a.show();
b.show();
}


