#include<iostream>
using namespace std;
class s1{
int a;
public:
    int b;
    s1(int x,int y)
    {
        a=x;
        b=y;
        cout<<"s1"<<endl;
    }
    void disp1()
    {
        cout<<a<<" "<<b<<endl;
    }

};

class s2 : public s1{
int c;
public:
    s2(int x,int y,int z):s1(y,z)  //  initializing base class
    {
        c=x;
        cout<<"s2"<<endl;
    }
};
int main()
{
   s2 x(5,6,7);
   // x.s1(9,8); you can't access constructor of base class through this base class constructor only can be accessed inside the inherited class
 // automatically first base class constructor will be called then inherited one
    x.disp1();
}

// output
//s1
//s2
//6 7

