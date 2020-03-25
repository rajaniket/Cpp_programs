// Using the concept of pointer write a function that swaps the private data values of two objects of different class type
#include<iostream>
using namespace std;
class y;
class x{
    int s;
    public:
    x(int p):s(p){}
    void display(){
    cout<<"x="<<s<<endl;
    }
    friend void swap_obj(x *a,y *b);
    friend void swap_obj(y *a,x *b);

};
class y{
     int c;
     public:
    y(int p):c(p){}
    void display(){
    cout<<"y="<<c<<endl;
    }
    friend void swap_obj(x *a,y *b);
    friend void swap_obj(y *a,x *b);
};

void swap_obj(x *a,y *b){ //Function overloading
int h;
h=a->s;
a->s=b->c;
b->c=h;
}
void swap_obj(y *a,x *b){
int h;
h=a->c;
a->c=b->s;
b->s=h;
}
int main(){
x a(5);
y b(10);
a.display();
b.display();
swap_obj(&a,&b);
cout<<"\nafter swap\n"<<endl;
a.display();
b.display();
}
