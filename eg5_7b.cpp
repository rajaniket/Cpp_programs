// using objects as argument add two time to get new time 
//(Pass and Return Object from the Function)

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
cout<<"The time is "<<hours<<" hours and "<<minutes<<" minutes. "<<endl;
}
Time addtime(Time x)
{
Time Temp;
Temp.hours=(x.minutes + minutes)/60;
Temp.minutes=(x.minutes + minutes)%60;
Temp.hours=Temp.hours + x.hours + hours;
return Temp;
}
};
int main() 
{
Time a,b,c;
a.gettime(2,123);
b.gettime(3,64);
c=a.addtime(b);
c.showtime();
}
