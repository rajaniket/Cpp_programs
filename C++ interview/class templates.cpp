#include <iostream>
using namespace std;
// addition of number
template <class T>
class add {
 T a,b;
 public:
 add(T x, T y)
 {
     a=x;
     b=y;
 }
 void display()
 {
     cout<<a+b<<endl;
 }

};
int main()
{

    add<int> s1(1,2);
    s1.display();
}
