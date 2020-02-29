//Using friend function to add data objects from two different classes.

#include<iostream>
using namespace std;
class s2; // class s2 must be declare on top if you u are using it in some class
class s1
{
int data;
public:
void getdata(int x){
data=x;
}
private:// friend function can be either private and public it works same for both;
friend int add(s1 a,s2 b);
};
class s2
{
int data;
public:
void getdata(int x){
data=x;
}
private:
friend int add(s1,s2);
};
int add(s1 a, s2 b){
int y;
y=a.data + b.data;
cout<<"addition of two objects of different class( "<<a.data<<" + "<<b.data<<" ) => "<<y<<endl;
}
int main()
{
s1 a;
s2 b;
a.getdata(5);
b.getdata(2);
add(a,b);
}
