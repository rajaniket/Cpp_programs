//swapping of private data of classes 

#include<iostream>
using namespace std;
class s2;
class s1
{
int data1;
public:
void getdata(int x){
data1=x;
}
void display()
{
cout<<"the class s1 data = "<<data1<<endl;
}
friend void exchange(s1 & , s2 &);

};
class s2
{
int data2;
public:
void getdata(int x){
data2=x;
}
void display()
{
cout<<"the class s2 data = "<<data2<<endl;
}
friend void exchange(s1 & , s2 &);
};
void exchange(s1 & m , s2 & n){
int z;
z=m.data1;
m.data1 = n.data2;
n.data2 = z;
}
int main()
{
s1 a;
s2 b;
a.getdata(20);
b.getdata(30);
cout<<"Before exchange"<<endl;
a.display();
b.display();
  exchange(a,b);
cout<<"Afte:exchange"<<endl;
a.display();
b.display();
}
