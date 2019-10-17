//write a program to compute the area of a triangle and a circle by overloading the area() function.
#include <cmath>
#include <iostream>
#include<stdio.h>
using namespace std;

int area(int a,int b)
{
      return a*b;
}
int area(int s)
{
      return s*s;
}
float area(double r)
{
      return (3.14*r*r);
}
float area(float h,float b)
{
      return ((h*b)/2);
}

int main()
{
    int s,l,b;
	float r,bs,ht,sq,re,tr,cr;
	cout<<"Enter side of a square:";
	cin>>s;
	cout<<"Enter length and breadth of rectangle:";
	cin>>l>>b;
	cout<<"Enter radius of circle:";
	cin>>r;
	cout<<"Enter base and height of triangle:";
	cin>>bs>>ht;
    sq=area(s);
    re=area(l,b);
    tr=area(bs,ht);
    cr=area(r);
    cout<<"area of square="<<sq<<endl<<"area of rectangle="<<re<<endl<<"area of circle="<<cr<<endl<<"area of triangle="<<tr;
}
