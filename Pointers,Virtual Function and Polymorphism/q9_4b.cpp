// Using the concept of pointer write a function that swaps the private data values of two objects of same class type
#include<iostream>
using namespace std;
class x{
    int s;
    public:
    x(int p):s(p){}
    void display(){
    cout<<"x="<<s<<endl;
    }
    friend void swap_obj(x *a,x *b);


};

void swap_obj(x *a,x*b){
int h;
h=a->s;
a->s=b->s;
b->s=h;
}
int main(){
x a(5);
x b(10);
a.display();
b.display();
swap_obj(&a,&b);
cout<<"\nafter swap\n"<<endl;
a.display();
b.display();
}
