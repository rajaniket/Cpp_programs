#include <iostream>
using namespace std;
// exchange private member of class
class s1;
class s2 {
int b;
public:
    s2(int x)
    { b=x;
    }
    void display()
    {
        cout<<b<<endl;
    }
     friend void change(s1 &x,s2 &y); // reference variable because we want to change in real object
};
class s1 {
int a;
public:
    s1(int x)
    {
        a=x;
    }

  void display()
  {
      cout<<a<<endl;
  }
  friend void change(s1 &x,s2 &y);  // friend function can access private data also
};

void change(s1 &x,s2 &y)
{
  int temp =x.a;
  x.a = y.b;
  y.b = temp;
}

int main()
{
    s1 a(9);
    s2 b(2);
    change(a,b);
    a.display();
    b.display();

}
