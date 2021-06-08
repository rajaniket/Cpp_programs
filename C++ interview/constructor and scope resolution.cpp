#include<iostream>
using namespace std;
class s1{
int a;
public:
    s1() // default constructor
    {
        a=0;
    }
    s1(int x);  // parametrize constructor
    s1(s1 &x)   // copy constructor (copy means you are copying data from another object of the same class
    {
        a=x.a;
    }
   void display();

};

s1::s1(int x)
{
    a=x;
}
void s1::display()  // void return type and deriving the function that is inside s1
{
    cout<<a<<endl;
}
int main()
{
    s1 z(5);
    s1 y(z);  // copy constructor
    y.display();
}
