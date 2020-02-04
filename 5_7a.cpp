// using objects as argument add two time to get new time
 //(only Pass Object from the Function with no return type)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Time {
int hours,minutes;
public:
void gettime(int h,int m){
hours=h;
minutes=m;
}
void showtime()
{
int x;
x=hours;
hours=minutes/60;
minutes=minutes%60;
hours=x+hours;

cout<<"The time is "<<hours<<" hours and "<<minutes<<" minutes. "<<endl;
}
void addtime(Time x,Time y)
{

hours=x.hours + y.hours;
minutes=x.minutes + y.minutes;
}
};
int main() 
{
Time a,b,c;
a.gettime(2,123);
b.gettime(3,64);
c.addtime(a,b);
c.showtime();
}
