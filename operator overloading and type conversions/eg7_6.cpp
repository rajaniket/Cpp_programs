//overloading of pointer to member operator to access members of pointer and non pointer object
#include <iostream>
using namespace std;
class xyz{
int num;
public:
    xyz(){
    num=0;
    }
    xyz(int a)
    {
        num=a;
    }
    void show(){
    cout<<"num :"<<num<<endl;
    }
    xyz* operator ->(){
    return this;
    }

};
int main(){
xyz p;
xyz *a=new xyz(5);
p.show();
a->show();
p->show();
}



