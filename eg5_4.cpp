// static class member example (how to initialize the static variable,
#include<iostream>
using namespace std;
class item
{
public:
static int count;
int number;
public:
void getdata(int a)
{
number=a;
++count;
}
void display()
{
cout<<"count: "<<count<<endl;
}
};
int item :: count=1;
int main()
{
item a,b,c;
a.display();
b.display();
c.display();
a.getdata(12);
a.display();
b.getdata(13);
c.getdata(14);
a.getdata(12);
b.getdata(13);
cout<<"after reading the data"<<endl;
a.display();
b.display();
b.count=12;
c.display();
}
