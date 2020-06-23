// write a program to calculate volume ,and also count the the number of times constructer is used.

#include<iostream>
using namespace std;
class box {
static int count;  // it will store how many times constructer has been used.
double length,width,height;
public:
box(double l=2.0, double b=3.0, double c=4.0){
count++;
cout<<"count = "<<count<<endl;
cout<<"constructor called"<<endl;
length=l;
width=b;
height=c;
}
void c(){
cout<<"Total Number of times is constructer used: "<<count<<endl;
}
double volume(){
return length*width*height;
}
};
int box :: count;

int main()
{
box box1(1,2,3);
box box2(3,2,3);
cout<< "volume = "<<box1.volume()<<endl;
cout<<"volume = "<< box2.volume()<<endl;
box2.c();
}
