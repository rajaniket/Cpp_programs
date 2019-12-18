#include<iostream>
using namespace std;
class code {
int id;
public:
    code(){id=0;}
    code(int x){id=x;}
    code(code &t){id=t.id;} // we can use code(const code &t), it safe the object from being modified accidentally
    int display(){
    int x;
    x=id;
    return x;
    }
};
int main(){
code a;
code b(25);
code c(b);
code d;
d=a;
cout<<"id of A:"<<a.display()<<endl;
cout<<"id of B:"<<b.display()<<endl;
cout<<"id of C:"<<c.display()<<endl;
cout<<"id of D:"<<d.display()<<endl;
}
