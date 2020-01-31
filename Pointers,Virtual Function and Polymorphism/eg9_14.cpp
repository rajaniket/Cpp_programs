// Pure virtual function
#include<iostream>
using namespace std;
class hero{
public:
  virtual void display()=0;    // or it can be like " virtual void display(){} " => pure virtual function
};
class follower:public hero{
public:
    void display(){
    cout<<"Hi Hero"<<endl;
    }
};
class movie:public hero{
public:
    void display(){
    cout<<"Best Movie"<<endl;
    }
};
int main(){
hero *A[2];
follower s;
movie d;
A[0]=&s;
A[1]=&d;
A[0]->display();
A[1]->display();
}
